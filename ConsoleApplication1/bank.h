#ifndef BANK_H
#define BANK_H

#include <iostream>
#include <vector>
#include "CompteBancaire.h"
using namespace std;

class Bank {
private:
    string nom;
    vector<CompteBancaire> comptes;

public:
    // Constructeur
    Bank(string n);

    // Gestion des comptes
    void ajouterCompte(const CompteBancaire& compte);
    void supprimerCompte(string numero);
    CompteBancaire* chercherCompte(string numero);

    // Affichage
    void afficherTousComptes() const;

    // Transfert
    void transferer(string numSource, string numDest, double montant);
};

#endif
