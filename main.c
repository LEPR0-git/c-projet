#include <stdio.h>

// Fonction pour calculer la factorielle d'un nombre
long factorielle(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorielle(n - 1);
}

// Fonction pour calculer le coefficient binomial C(n, k)
long coefficient_binomial(int n, int k) {
    return factorielle(n) / (factorielle(k) * factorielle(n - k));
}

// Fonction pour afficher le triangle de Pascal
void afficher_triangle_pascal(int lignes) {
    for (int n = 0; n < lignes; n++) {
        // Ajouter des espaces pour centrer le triangle
        for (int espace = 0; espace < lignes - n - 1; espace++) {
            printf(" ");
        }

        // Afficher les coefficients binomiaux pour la ligne n
        for (int k = 0; k <= n; k++) {
            printf("%ld ", coefficient_binomial(n, k));
        }
        printf("\n");
    }
}

int main() {
    int lignes;

    // Demander à l'utilisateur le nombre de lignes
    printf("Entrez le nombre de lignes pour le triangle de Pascal : ");
    scanf("%d", &lignes);

    // Afficher le triangle de Pascal
    afficher_triangle_pascal(lignes);

    return 0;
}
