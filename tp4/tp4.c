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
    scanf("%d", &choix);
    return choix;
}

int saisirNombreEleves()
{
    int nbEleves = 0;
    printf("Entrez le nombre d'eleves (1 a 30) : ");
    scanf("%d", &nbEleves);
    if (nbEleves >= 1 && nbEleves <= 30)
    {
        return nbEleves;
    }
    else
    {
        printf("valeur invalide\n");
        saisirNombreEleves();
    }
}

void saisirNotes(int note[][3], int n)
{
    printf("Saisie des notes pour %d eleves et 3 controles.\n", n);
    for (int i = 0; i < n; i++)
    {
        printf("Eleve %d :\n", i + 1);
        printf("  Note du controle 1 (0 a 20) : ");
        scanf("%d", &note[i][0]);
        printf("  Note du controle 2 (0 a 20) : ");
        scanf("%d", &note[i][1]);
        printf("  Note du controle 3 (0 a 20) : ");
        scanf("%d", &note[i][2]);
    }
}

void afficherNotes(int notes[][3], int n)
{
    printf("Tableau des notes\n");
    printf("Eleve ");
    for (int i = 0; i < n; i++)
    {
        printf("C%d ", i + 1);
    }
    printf("\n");
    for (int i = 0; i < 3; i++)
    {
        printf("   %d  ", i + 1);
        for (int j = 0; j < n; j++)
        {
            printf(" %d ", notes[j][i]);
        }
        printf("\n");
    }
}

float calculerMoyenneEleve(int notes[][3], int c)
{
    return ((float)notes[c][0] + (float)notes[c][1] + (float)notes[c][2]) / 3.0;
}

float calculerMoyenneGenerale(int n, int notes[][3])
{
    float res = 0;
    for (int i = 0; i < n; i++)
    {
        res += calculerMoyenneEleve(notes, i);
    }
    return res / (float)n;
}

int trouverMeilleureNoteControle(int note[][3], int c)
{
    int best = 0;
    for (int i = 0; i < 3; i++)
    {
        if (note[i][c - 1] > best)
        {
            best = note[i][c - 1];
        }
    }
    return best;
}

void afficherMeilleuresNotes(int notes[][3])
{
    printf("Meilleure note au C1 : %d \n", trouverMeilleureNoteControle(notes, 1));
    printf("Meilleure note C2  : %d \n", trouverMeilleureNoteControle(notes, 2));
    printf("Meilleure note au C3 : %d \n", trouverMeilleureNoteControle(notes, 3));
}

int main()
{
    int nbEleves = 0;

    afficherMenu();
    lireChoix();

    nbEleves = saisirNombreEleves();

    int notes[nbEleves][3];

    saisirNotes(notes, nbEleves);

    afficherNotes(notes, nbEleves);

    int eleveChoisi;
    printf("Entrez l'indice de l'eleve (1 a %d): ", nbEleves);
    scanf("%d", &eleveChoisi);
    printf("Moyenne de l'eleve %d: %f\n", eleveChoisi, calculerMoyenneEleve(notes, eleveChoisi - 1));

    printf("Moyenne generale de la classe: %f\n", calculerMoyenneGenerale(nbEleves, notes));

    afficherMeilleuresNotes(notes);

    return 0;
}
