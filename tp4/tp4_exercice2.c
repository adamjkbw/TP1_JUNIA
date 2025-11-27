#include <stdio.h>
#include <stdlib.h>

void afficher_menu()
{
    printf("=== BANQUE - DISTRIBUTEUR === \n 1 - Faire un retrait \n 2 - Quitter \n");
}

int saisir_montant()
{
    int montant = 0;
    printf("Montant a retirer : ");
    scanf("%d", &montant);
    return montant;
}

int montant_valide(int montant)
{
    if (montant < 5 || montant == 0 || montant > 1000 || montant % 5 != 0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

void calcul_distribution(int montant)
{
    int n_50 = 0, n_20 = 0, n_10 = 0, n_5 = 0;
    while (montant != 0)
    {
        if (montant - 50 >= 0)
        {
            n_50++;
            montant -= 50;
        }

        else if (montant - 20 >= 0)
        {
            n_20++;
            montant -= 20;
        }

        else if (montant - 10 >= 0)
        {
            n_10++;
            montant -= 10;
        }

        else
        {
            n_5++;
            montant -= 5;
        }
    }

    printf("Billets distribues : ");

    if (n_50 > 0)
    {
        printf("%d billets de 50 euros\n", n_50);
    }

    if (n_20 > 0)
    {
        printf("%d billets de 20 euros\n", n_20);
    }

    if (n_10 > 0)
    {
        printf("%d billets de 10 euros\n", n_10);
    }

    if (n_5 > 0)
    {
        printf("%d billets de 5 euros\n", n_5);
    }
}

int main()
{
    int choix = 0;

    while (choix != 2)
    {
        afficher_menu();

        printf("Votre choix : ");
        scanf("%d", &choix);
        printf("\n\n");
        if (choix == 1)
        {
            int montant = saisir_montant();
            printf("\n\n");
            if (montant_valide(montant) == 1)
            {
                calcul_distribution(montant);
            }
            else
            {
                printf("Erreur : montant invalide \nLe montant doit etre entre 5 euros et 1000 euros, divisible par 5");
            }
        }
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    }

    return 0;
}