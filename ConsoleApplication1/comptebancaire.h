#ifndef COMPTEBANCAIRE_H
#define COMPTEBANCAIRE_H

#include <iostream>
#include <string>
#include "Client.h"
using namespace std;

class CompteBancaire {
private:
    string numeroCompte;
    Client proprietaire;
    double solde;

public:
    // Constructeur
    CompteBancaire(string num, Client c, double s);

    // Méthodes principales
    void crediter(double montant);
    void retirer(double montant);
    void transferer(CompteBancaire& autre, double montant);

    // Affichage
    void afficherInfos() const;

    // Accesseurs
    double getSolde() const;
    string getNumero() const;
};

#endif