#include "Bank.h"

// Constructeur
Bank::Bank(string n) : nom(n) {}

// Ajouter un compte
void Bank::ajouterCompte(const CompteBancaire& compte) {
    comptes.push_back(compte);
    cout << "Compte " << compte.getNumero() << " ajouté à la banque." << endl;
}

// Supprimer un compte
void Bank::supprimerCompte(string numero) {
    for (auto it = comptes.begin(); it != comptes.end(); ++it) {
        if (it->getNumero() == numero) {
            comptes.erase(it);
            cout << "Compte " << numero << " supprimé." << endl;
            return;
        }
    }
    cout << "Compte non trouvé !" << endl;
}

// Chercher un compte
CompteBancaire* Bank::chercherCompte(string numero) {
    for (auto& compte : comptes) {
        if (compte.getNumero() == numero)
            return &compte;
    }
    cout << "Compte " << numero << " introuvable." << endl;
    return nullptr;
}

// Afficher tous les comptes
void Bank::afficherTousComptes() const {
    cout << "\n===== Comptes de la banque " << nom << " =====" << endl;
    for (const auto& compte : comptes) {
        compte.afficherInfos();
    }
}

// Transfert entre deux comptes
void Bank::transferer(string numSource, string numDest, double montant) {
    CompteBancaire* src = chercherCompte(numSource);
    CompteBancaire* dest = chercherCompte(numDest);

    if (src && dest) {
        src->transferer(*dest, montant);
    }
    else {
        cout << "Transfert impossible : un des comptes n'existe pas." << endl;
    }
}