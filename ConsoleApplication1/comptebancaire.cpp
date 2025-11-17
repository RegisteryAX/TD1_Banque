#include "CompteBancaire.h"

// Constructeur
CompteBancaire::CompteBancaire(string num, Client c, double s)
    : numeroCompte(num), proprietaire(c), solde(s) {}

// Créditer
void CompteBancaire::crediter(double montant) {
    if (montant > 0) {
        solde += montant;
        cout << "Compte " << numeroCompte << " crédité de " << montant << "€." << endl;
    }
    else {
        cout << "Montant invalide." << endl;
    }
}

// Retirer
void CompteBancaire::retirer(double montant) {
    if (montant <= 0) {
        cout << "Montant invalide." << endl;
    }
    else if (montant > solde) {
        cout << "Solde insuffisant !" << endl;
    }
    else {
        solde -= montant;
        cout << "Retrait de " << montant << "€ effectué." << endl;
    }
}

// Transférer
void CompteBancaire::transferer(CompteBancaire& autre, double montant) {
    if (montant > 0 && montant <= solde) {
        solde -= montant;
        autre.crediter(montant);
        cout << "Transfert de " << montant << "€ du compte "
            << numeroCompte << " vers le compte " << autre.numeroCompte << endl;
    }
    else {
        cout << "Transfert impossible (montant invalide ou solde insuffisant)." << endl;
    }
}

// Afficher infos
void CompteBancaire::afficherInfos() const {
    cout << "-----------------------------" << endl;
    cout << "Numéro de compte : " << numeroCompte << endl;
    proprietaire.afficherInfos();
    cout << "Solde actuel : " << solde << "€" << endl;
    cout << "-----------------------------" << endl;
}

// Getters
double CompteBancaire::getSolde() const { return solde; }
string CompteBancaire::getNumero() const { return numeroCompte; }