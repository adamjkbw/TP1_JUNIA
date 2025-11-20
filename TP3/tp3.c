#include <stdio.h>

int main()
{
    int n;
    printf("Saisissez une taille n (5 <= n <= 10) : ");
    scanf("%d", &n);
    int width = n * n;
    int max_height = n * 3 - 1;
    char img[30][122];
    for (int i = 0; i < 29; i++)
    {
        for (int j = 0; j < 121; j++)
        {
            img[i][j] = ' ';
        }
    }

    int mid = width / 2;

    // boucle qui dessine la pointe
    for (int i = 0; i < n; i++)
    {
        if (i == n - 1)
        {
            for (int j = 0; j < width; j++)
            {
                img[i][j] = '_';
            }
        }
        for (int j = 0; j < i * 2 + 1; j++)
        {
            if (j == 0 || j == i * 2)
            {
                img[i][mid + (j - i)] = 'A';
            }
            else
            {
                img[i][mid + (j - i)] = 'S';
            }
        }
    }

    // boucle qui dessine le centre de l'étoile
    for (int i = n; i < n * 2 - 2; i++)
    {
        int largeur = 2 * i - 2 * n;
        for (int j = largeur; j < width - largeur; j++)
        {
            img[i][j] = 'S';

            if (j == largeur || j == width - largeur - 1)
            {
                img[i][j] = '.';
                img[i][largeur + 1] = 'V';
                img[i][width - largeur - 2] = 'V';
            }
        }
    }

    // boucle qui dessine les jambes
    int ii = n * 2 - 2;
    for (int i = 0; i < n + 1; i++)
    {
        for (int j = 0; j < width; j++)
        {
            img[ii][j] = 'S';
        }

        for (int j = 0; j < 2 * n - 4 - i; j++)
        {
            img[ii][j] = ' ';
            img[ii][width - j - 1] = ' ';
            if (j == 2 * n - 5 - i)
            {
                img[ii][width - j - 1] = '.';
                img[ii][j] = '.';
            }
        }
        // boucle qui dessine le centre
        for (int j = mid - 2 * i; j < mid; j++)
        {
            img[ii][j] = ' ';
            img[ii][width - j - 1] = ' ';
            img[ii][mid] = ' ';
            if (j == mid - 2 * i)
            {
                img[ii][width - j - 1] = '\"';
                img[ii][j] = '\"';
            }
        }

        ii++;
    }

    // boucle qui dessine l'étoile
    for (int i = 0; i < max_height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            printf("%c", img[i][j]);
        }
        printf("\n");
    }

    return 0;
}