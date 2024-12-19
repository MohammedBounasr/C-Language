#include <stdio.h>
#include <string.h>

int main()
{
    // Déclarer deux chaînes de caractères
    char chaine1[100];
    char chaine2[100];

    // Demander à l'utilisateur de saisir deux chaînes de caractères
    printf("Entrez la chaîne1  : ");
    fgets(chaine1, sizeof(chaine1), stdin);
    printf("Entrez la chaîne2 : ");
    fgets(chaine2, sizeof(chaine2), stdin);

    // Utiliser strcmp pour copmpare la chaîne1 et la chaine2
    int cmp = strcmp(chaine1, chaine2);
    if (cmp > 0)
    {
        printf("la chaine1 est plus grand que la chaine2");
    }
    else if (cmp < 0)
    {
        printf("la chaine2 est plus grand que la chaine1");
    }
    else
    {
        printf("les chaines sont egales");
    }


    return 0;
}