#include <stdio.h>

int main() {
    int t[3] = {10, 20, 30};
    size_t i = sizeof(t) / sizeof(t[0]) - 1;
    printf("%d\n", t[i]); 
    return 0;
}

/*la valeur de i est négative, les indexes d'un tableau commencent à 0*/