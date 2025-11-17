#include <stdio.h>

int main()
{
    int n = 0;

    printf("Saisissez une taille entre 5 et 10 : ");
    scanf("%d", &n);

    int width = n * n;
    int max_height = 3 * n - 1;
    char img[100][100];

    int mid = width / 2;

    for (int i = 0; i < max_height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            img[i][j] = ' ';
        }
    }

    img[0][mid] = 'A';
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < width; j++)
        {
            if (img[i - 1][j] != ' ')
            {
                img[i][j] = 'S';
            }

            else if (j == mid - i || j == mid + i)
            {
                img[i][j] = 'A';
            }
            else if (i == n - 1)
            {
                img[i][j] = '_';
            }
        }
    }

    for (int i = n; i < n * 2 - n / 5; i++)
    {
        int largeur = width;
        int min_largeur = 0;
        for (int j = 0; j < width; j++)
        {
            if (i == n && j == 0 || j == width - 1 && i == n || i == n + 1 && j == 3 || i == n + 1 && j == width - 3)
            {
                img[i][j] = '"';
            }
            else if (i == n)
            {
                img[i][j] = 'S';
            }
        }
        largeur -= 2;
        min_largeur -= 2;
    }

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