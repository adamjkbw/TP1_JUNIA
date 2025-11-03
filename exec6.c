#include <stdio.h>

int main() {
    char nom[50];
    printf("Nom ? ");
    scanf("%s", nom); 
    char a = 'b';
    printf("Bonjour %s\n", nom);
    return 0;
}

/*il n'y avait pas assez de mémoire attribuée pour les noms*/