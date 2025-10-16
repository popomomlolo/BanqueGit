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
    return solde*(tauxInterets/100);
}

void CompteEpargne::ModifierTaux(float _montant)
{
    if (_montant>0){
        tauxInterets = _montant;
    }

}

CompteEpargne::~CompteEpargne()
{
    cout<<"destructeur epargne"<<endl;
}
