#include <stdio.h>
#include <string.h>

int main() {
    // Déclarer une chaîne de caractères
    char chaine[100];

    // Demander à l'utilisateur de saisir une chaîne de caractères
    printf("Entrez une chaîne de caractères : ");
    fgets(chaine, sizeof(chaine), stdin);

    //Supprimer le caractère de nouvelle ligne ajouté par fgets
    if (chaine[strlen(chaine) - 1] == '\n') {
        chaine[strlen(chaine) - 1] = '\0';
    }

    // Utiliser strlen pour déterminer la longueur de la chaîne
    size_t longueur = strlen(chaine);

    // Afficher le résultat
    printf("La longueur de la chaîne est : %zu\n", longueur);

    return 0;
}
