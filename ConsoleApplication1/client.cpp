#include "Client.h"

// Constructeur
Client::Client(string n, string p, string a, string e)
    : nom(n), prenom(p), adresse(a), email(e) {}

// Méthode d’affichage
void Client::afficherInfos() const {
    cout << "Client : " << prenom << " " << nom << endl;
    cout << "Adresse : " << adresse << endl;
    cout << "Email : " << email << endl;
}

// Getter pour le nom complet
string Client::getNomComplet() const {
    return prenom + " " + nom;
}