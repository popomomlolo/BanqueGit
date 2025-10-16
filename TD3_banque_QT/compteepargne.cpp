#include "compteepargne.h"





CompteEpargne::CompteEpargne(float _solde, float _tauxInterets)
    :CompteBancaire(_solde),
      tauxInterets(_tauxInterets)
{

}

CompteEpargne::CompteEpargne(const CompteEpargne &_d)
    :CompteBancaire(_d),
      tauxInterets(_d.tauxInterets)
{

}

float CompteEpargne::CalculerInterets()
{
    return solde*tauxInterets;
}

void CompteEpargne::ModifierTaux(float _montant)
{
    if (_montant>0){
        _montant=_montant/100;
        tauxInterets = _montant;
    }

}
