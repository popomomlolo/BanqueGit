#include <iostream>
#include "menu.h"
#include "comptebancaire.h"
#include "compteepargne.h"
using namespace std;

int main()
{

    Menu m("compteEpargne.txt");
    CompteEpargne c;
    int reponse,var;
    do {
    reponse=m.AfficherEtRecupererReponse();
    switch(reponse){
    case 1:
        cout<<"solde : "<<c.consulterSolde()<<endl;;
        break;
    case 2:
        cout<<"cb voulez vous deposer ? :"<<endl;
        cin>>var;
        c.deposer(var);
        cout<<"solde : "<<c.consulterSolde()<<endl;;
        break;
    case 3:
        cout<<"cb voulez vous retirer ? :"<<endl;
        cin>>var;
        if (!c.retirer(var)){
            cout<<"ne peux pas retier"<<endl;
        }
        cout<<"solde : "<<c.consulterSolde()<<endl;;
        break;
    case 4:
        cout<<c.CalculerInterets()<<endl;
        break;

    case 5:
        cout<<"quitter le menu"<<endl;
        break;
    }
    }while(reponse!=5);
    return 0;
}
