#include "Client.h"


Client::Client(string n, string p, string a, string e)
    : nom(n), prenom(p), adresse(a), email(e) {}


void Client::afficherInfos() const {
    cout << "Client : " << prenom << " " << nom << endl;
    cout << "Adresse : " << adresse << endl;
    cout << "Email : " << email << endl;
}


string Client::getNomComplet() const {
    return prenom + " " + nom;
}