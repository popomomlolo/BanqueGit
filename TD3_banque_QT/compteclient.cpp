#include "compteclient.h"



CompteClient::CompteClient(string _nom, int _numero)
    :
      nom(_nom),
      numero(_numero)
{
    compteBancaire = new CompteBancaire(0.0);
    compteEpargne=nullptr;
}

CompteClient::~CompteClient()
{
    delete compteBancaire;
    if (compteEpargne==nullptr){
        delete compteEpargne;
    }
}

void CompteClient::OuvrirCompteEpargne()
{
    if (compteEpargne != nullptr)
    {
        cout << "L'ouverture d'un second compte épargne n'est pas autorisée" << endl;
    }else{
        float _solde;
        float _tauxInterets;
        cout << "Entrez le montant du solde de départ : ";
        cin >> _solde;
        cout << "Entrez le taux d'intérêt (en %) : ";
        cin >> _tauxInterets;
        compteEpargne = new CompteEpargne(_solde,_tauxInterets);
    }

}

void CompteClient::GererCompteBancaire()
{
    Menu m("compteBancaire.txt");
    int reponse,var;
    do {
    reponse=m.AfficherEtRecupererReponse();
    switch(reponse){
    case 1:
        cout<<"solde : "<<compteBancaire->consulterSolde()<<endl;;
        break;
    case 2:
        cout<<"cb voulez vous deposer ? :"<<endl;
        cin>>var;
        compteBancaire->deposer(var);
        cout<<"solde : "<<compteBancaire->consulterSolde()<<endl;;
        break;
    case 3:
        cout<<"cb voulez vous retirer ? :"<<endl;
        cin>>var;
        if (!compteBancaire->retirer(var)){
            cout<<"ne peux pas retier"<<endl;
        }
        cout<<"solde : "<<compteBancaire->consulterSolde()<<endl;;
        break;
    case 4:
        cout<<"quitter le menu"<<endl;
        break;
    }}while(reponse!=4);
}

void CompteClient::GererCompteEpargne()
{
    if (compteEpargne==nullptr){
        cout<<"vous ne pouvez pas gerer un compte qui n'existe pas"<<endl;
    }else{
    Menu m("compteEpargne.txt");
    int reponse,var;
    do {
    reponse=m.AfficherEtRecupererReponse();
    switch(reponse){
    case 1:
        cout<<"solde : "<<compteEpargne->consulterSolde()<<endl;;
        break;
    case 2:
        cout<<"cb voulez vous deposer ? :"<<endl;
        cin>>var;
        compteEpargne->deposer(var);
        cout<<"solde : "<<compteEpargne->consulterSolde()<<endl;;
        break;
    case 3:
        cout<<"cb voulez vous retirer ? :"<<endl;
        cin>>var;
        if (!compteEpargne->retirer(var)){
            cout<<"ne peux pas retier"<<endl;
        }
        cout<<"solde : "<<compteEpargne->consulterSolde()<<endl;;
        break;
    case 4:
        cout<<compteEpargne->CalculerInterets()<<endl;
        break;

    case 5:
        cout<<"quitter le menu"<<endl;
        break;
    }
    }while(reponse!=5);}
}
