#include <stdio.h>
#include <string.h>

int main() {
    // Déclarer deux chaînes de caractères
    char chaine1[100];
    char chaine2[100];

    // Demander à l'utilisateur de saisir une chaîne de caractères
    printf("Entrez une chaîne de caractères : ");
    fgets(chaine1, sizeof(chaine1), stdin);

    // Utiliser strncpy pour copy les trois premiere caractere de la chaîne1 dans la chaine2
   strncpy(chaine2, chaine1, 3);
    chaine2[3] = '\0';// pour ajouter la \0
    

    // Afficher le résultat
    printf(" la chaîne copy  est : %s \n", chaine2);

    return 0;
}