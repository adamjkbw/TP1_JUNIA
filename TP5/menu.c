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

void initialiser()
{
    int conso[7];
}

void ajouterConsommation(int tab[7])
{
    int choix, qt;
    printf("Quelle categorie voulez vous modifier\n");
    printf("1. Eau 💧\n2. Cafe ☕\n3. Bonbons 🍬\n4. Gateau 🍰\n5. Legumes 🥦\n6. Fruits 🍎\n7. Proteines 🍗\n");
    printf("Votre choix : ");
    scanf("%d", &choix);

    printf("Combien d'unités ajouter ? \n");
    scanf("%d", &qt);
    tab[choix - 1] += qt;
    printf("Consommation mise a jour.\n");
}