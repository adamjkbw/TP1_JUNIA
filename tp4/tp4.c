#include <stdio.h>

void afficherMenu()
{
    printf("==== GESTION DE NOTES ====\n");
    printf("1. Saisir le nombre d'eleves\n");
    printf("2. Saisir les notes des eleves\n");
    printf("3. Afficher toutes les notes\n");
    printf("4. Afficher la moyenne d'un eleve\n");
    printf("5. Afficher la moyenne generale \n");
    printf("6. Afficher la meilleure note de chaque controle\n");
    printf("0. Quitter\n\n");
}

int lireChoix()
{
    int choix;
    printf("Votre choix : ");
    scanf("%d\n", &choix);
    return choix;
}

int saisirNombreEleves()
{
    int nbEleves = 0;
    while (nbEleves > 30 && nbEleves < 1)
    {
        printf("Entrez le nombre d'eleves (1 a 30) : ");
        scanf("%d\n", nbEleves);
        if (nbEleves > 30 && nbEleves < 1)
        {
            printf("Valeur invalide");
        }
        else
        {
            return nbEleves;
        }
    }
}

int main()
{
    afficherMenu();
    lireChoix();
    return 0;
}