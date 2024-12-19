#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    // Déclarer deux chaînes de caractères
    char chaine1[100];

    // Demander à l'utilisateur de saisir une chaîne de caractères
    printf("Entrez une chaîne de caractères : ");
    fgets(chaine1, sizeof(chaine1), stdin);

    // Supprimer le caractère de nouvelle ligne ajouté par fgets
    if (chaine1[strlen(chaine1) - 1] == '\n')
    {
        chaine1[strlen(chaine1) - 1] = '\0';
    }

    // convertir une chaine de caractere a une entier
    int number = atoi(chaine1);

    // Afficher le résultat
    printf(" la chaîne convertie en nombre est : %d \n", number);

    return 0;
}