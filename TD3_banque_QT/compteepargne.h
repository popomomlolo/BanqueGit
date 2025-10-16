#ifndef COMPTEEPARGNE_H
#define COMPTEEPARGNE_H
#include <iostream>
#include "comptebancaire.h"
using namespace std;
class CompteEpargne : public CompteBancaire
{
private:
    float tauxInterets;
public:
    CompteEpargne(float _solde=0.0,float _tauxInterets=3);
    CompteEpargne(const CompteEpargne &_d);

    float CalculerInterets();
    void ModifierTaux(float _montant);
    ~CompteEpargne();
};

#endif // COMPTEEPARGNE_H
