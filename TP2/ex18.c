#include <stdio.h>
#include <string.h>

int main()
{
    // Déclarer deux chaînes de caractères
    char chaine1[100];
    char chaine2[100];

    // Demander à l'utilisateur de saisir deux chaînes de caractères
    printf("Entrez une chaîne de caractères : ");
    fgets(chaine1, sizeof(chaine1), stdin);
    printf("Entrez une  chaîne de caractères : ");
    fgets(chaine2, sizeof(chaine2), stdin);

    // Supprimer le caractère de nouvelle ligne ajouté par fgets
    if (chaine2[strlen(chaine2) - 1] == '\n')
    {
        chaine2[strlen(chaine2) - 1] = '\0';
    }
    if (chaine1[strlen(chaine2) - 1] == '\n')
    {
        chaine1[strlen(chaine2) - 1] = '\0';
    }

    // Utiliser strncat pour concaténer les deux premiers caractères de chaine1 à la fin de chaine2
    strncat(chaine2, chaine1, 2);

    // Afficher le résultat
    printf(" la chaîne concatene est : %s \n", chaine2);

    return 0;
}