#ifndef COMPTEBANCAIRE_H
#define COMPTEBANCAIRE_H


class CompteBancaire
{
protected:
    float solde;
public:
    CompteBancaire(float _solde=0.0);
    CompteBancaire(const CompteBancaire &_d);
    void deposer(float _montant);
    bool retirer(float _montant);
    float consulterSolde();
};

#endif // COMPTEBANCAIRE_H
