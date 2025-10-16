#ifndef COMPTEEPARGNE_H
#define COMPTEEPARGNE_H

#include "comptebancaire.h"

class CompteEpargne : public CompteBancaire
{
private:
    float tauxInterets;
public:
    CompteEpargne(float _solde=0.0,float _tauxInterets=0.03);
    CompteEpargne(const CompteEpargne &_d);

    float CalculerInterets();
    void ModifierTaux(float _montant);
};

#endif // COMPTEEPARGNE_H
