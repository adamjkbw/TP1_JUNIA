#include <stdio.h>

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

int main()
{
    int choix = 0;

    while (choix != 2)
    {
        afficher_menu();

        printf("Votre choix : ");
        scanf("%d", &choix);

        if (choix == 1)
        {
            if (montant_valide(saisir_montant()) == 1)
            {
            }
            else
            {
                printf("Erreur : montant invalide \nLe montant doit etre entre 5 euros et 1000 euros, divisible par 5");
            }
        }
    }

    return 0;
}