#include <iostream>
#include "Bank.h"
#include "Client.h"
using namespace std;

int main() {
    
    Bank banque("Banque ESPRIM");


    Client c1("Zammit", "Yassmine", "Monastir", "yassmine.zammit@esprim.tn");
    Client c2("Dupont", "Jean", "Dijon", "jean.dupont@email.com");

    
    CompteBancaire compte1("CPT1001", c1, 1500.0);
    CompteBancaire compte2("CPT1002", c2, 500.0);

    
    banque.ajouterCompte(compte1);
    banque.ajouterCompte(compte2);

    
    banque.afficherTousComptes();

    
    cout << "\n=== Transfert via la banque ===" << endl;
    banque.transferer("CPT1001", "CPT1002", 300);

    
    banque.afficherTousComptes();

    return 0;
}