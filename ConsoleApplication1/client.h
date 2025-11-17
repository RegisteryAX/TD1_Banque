#ifndef CLIENT_H
#define CLIENT_H

#include <string>
#include <iostream>
using namespace std;

class Client {
private:
    string nom;
    string prenom;
    string adresse;
    string email;

public:
    // Constructeur
    Client(string n, string p, string a, string e);

    // Méthode pour afficher les infos du client
    void afficherInfos() const;

    // Getter pour le nom complet
    string getNomComplet() const;
};

#endif