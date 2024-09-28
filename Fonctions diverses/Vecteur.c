
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *vecteur = NULL;  // Tableau dynamique
    int taille = 0;       // Taille actuelle du vecteur

    // Ajouter un élément
    vecteur = realloc(vecteur, (taille + 1) * sizeof(int));
    vecteur[taille++] = 10;

    // Ajouter un autre élément
    vecteur = realloc(vecteur, (taille + 1) * sizeof(int));
    vecteur[taille++] = 20;

    // Afficher les éléments
    for (int i = 0; i < taille; i++) {
        printf("%d\n", vecteur[i]);
    }

    // Libérer la mémoire
    free(vecteur);

    return 0;
}
