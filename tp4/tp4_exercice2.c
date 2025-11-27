#include <stdio.h>

void afficher_menu()
{
    printf("=== BANQUE - DISTRIBUTEUR === \n 1 - Faire un retrait \n 2 - Quitter \n");
}

int saisir_montant()
{
    int montant = 0;
    printf("Montant a retirer : ");
    scanf("%d", montant);
}

int main()
{
    int choix = 0;

    while (choix != 2)
    {
        afficher_menu();
    }

    printf("Votre choix : ");
    scanf("%d", &choix)

        if (choix == 1)
    {
        saisir_montant();
    }

    return 0;
}