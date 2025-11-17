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
    
    Client(string n, string p, string a, string e);

    
    void afficherInfos() const;

    
    string getNomComplet() const;
};

#endif