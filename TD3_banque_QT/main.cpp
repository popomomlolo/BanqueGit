#include "compteclient.h"
int main()
{

    Menu m("client.txt");
    CompteClient c("Albert",1);
    int reponse;
    do {
    reponse=m.AfficherEtRecupererReponse();
    switch(reponse){
    case 1:
        c.OuvrirCompteEpargne();
        break;
    case 2:
        c.GererCompteBancaire();
        break;
    case 3:
        c.GererCompteEpargne();
        break;
    case 4:
        cout<<"quitter le menu"<<endl;
        break;
    }
    }while(reponse!=4);
    return 0;
}
