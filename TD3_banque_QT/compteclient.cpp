#include "compteclient.h"



CompteClient::CompteClient(CompteEpargne compteEpargne, CompteBancaire compteBancaire, string _nom, int _numero)
    :
{

}

CompteClient::~CompteClient()
{
    delete [] CompteEpargne;
    delete [] CompteBancaire;
}

void CompteClient::OuvrirCompteEpargne()
{
    if(compteEpargne!=nullptr){

    }
}

void CompteClient::GererCompteBancaire()
{

}

void CompteClient::GererCompteEpargne()
{

}
