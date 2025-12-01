#include "menu.h"
#include <stdio.h>
#include <string.h>

void menu()
{
    printf("==============================\n");
    printf("    Suivi de consommation\n");
    printf("==============================\n");
    printf("1. Ajouter une consommation\n");
    printf("2. Afficher le resume du jour\n");
    printf("3. Sauvegarder et quitter\n");
}

int choix()
{
    int choix;

    printf("Votre choix : ");
    scanf("%d", &choix);

    return choix;
}