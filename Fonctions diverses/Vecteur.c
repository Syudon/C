
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *vecteur = NULL;  // Tableau dynamique
    int taille = 0;       // Taille actuelle du vecteur

    // Ajouter un �l�ment
    vecteur = realloc(vecteur, (taille + 1) * sizeof(int));
    vecteur[taille++] = 10;

    // Ajouter un autre �l�ment
    vecteur = realloc(vecteur, (taille + 1) * sizeof(int));
    vecteur[taille++] = 20;

    // Afficher les �l�ments
    for (int i = 0; i < taille; i++) {
        printf("%d\n", vecteur[i]);
    }

    // Lib�rer la m�moire
    free(vecteur);

    return 0;
}
