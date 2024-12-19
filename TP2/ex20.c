#include <stdio.h>
#include <string.h>
#include <ctype.h>
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

    // determiner le type de charactere
    for (int i = 0; i < strlen(chaine1); i++)
    {
        if (isupper(chaine1[i]) > 0)
        {
            printf(" %c is uppercase\n ", chaine1[i]);
        }
        else
        {
            printf(" %c is lowercase \n ", chaine1[i]);
        }
    }

    return 0;
}
