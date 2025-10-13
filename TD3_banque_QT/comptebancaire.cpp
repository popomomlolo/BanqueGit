#include "comptebancaire.h"



CompteBancaire::CompteBancaire(float _solde):solde(_solde)
{

}

CompteBancaire::CompteBancaire(const CompteBancaire &_d):solde(_d.solde)
{

}

void CompteBancaire::deposer(float _montant)
{
    if (_montant>0){
    solde+=_montant;
    }
}
/**
 * @brief CompteBancaire::retirer : soustrait le montant au solde
 * @param _montant
 * @return  : un booleen vrai si
 */
bool CompteBancaire::retirer(float _montant)
{
    bool ok = false;
    if(_montant>0){
    if (_montant<solde){
        solde-=_montant;
        ok= true;
    }}
    return ok;
}

float CompteBancaire::consulterSolde()
{
    return solde;
}
