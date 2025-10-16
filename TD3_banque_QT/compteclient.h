#ifndef COMPTECLIENT_H
#define COMPTECLIENT_H
#include <string>
#include <algorithm>
#include <iostream>
#include "compteepargne.h"
#include "comptebancaire.h"
using namespace std;

class CompteClient
{
private:
    CompteEpargne *compteEpargne;
    CompteBancaire *compteBancaire;
    string nom;
    int numero;
public:
    CompteClient(CompteEpargne compteEpargne=nullptr,CompteBancaire compteBancaire=0,string _nom,int _numero);
    ~CompteClient();

    void OuvrirCompteEpargne();
    void GererCompteBancaire();
    void GererCompteEpargne();
};

#endif // COMPTECLIENT_H
