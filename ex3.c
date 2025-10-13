#include <stdio.h>
#include <string.h>

int main() {
    char mot_a_trouver[30];
    char essai[30];
    int i = 0;

    printf("Choisissez un mot : ");
    scanf("%s", mot_a_trouver);

    while (i <= 7) {
        printf("Essai %d : ", i + 1);
        scanf("%s", essai);

        if (strcmp(essai, mot_a_trouver) == 0) {
            printf("Vous avez gagné !\n");
            break;
        } else {
            switch (i) {
                case 0:
                    printf("\n\n\n\n\n\n\n-------\n");
                    break;
                case 1:
                    printf("\n |\n |\n |\n |\n |\n |\n-------\n");
                    break;
                case 2:
                    printf(" -------\n |     |\n |\n |\n |\n |\n-------\n");
                    break;
                case 3:
                    printf(" -------\n |     |\n |     O\n |\n |\n |\n-------\n");
                    break;
                case 4:
                    printf(" -------\n |     |\n |     O\n |     |\n |\n |\n-------\n");
                    break;
                case 5:
                    printf(" -------\n |     |\n |     O\n |    /|\\\n |\n |\n-------\n");
                    break;
                case 6:
                    printf(" -------\n |     |\n |     O\n |    /|\\\n |    / \\\n |\n-------\n");
                    break;
                case 7:
                    printf("Vous avez perdu !\n");
                    break;
            i++;
            }
        }
    }

    return 0;
}