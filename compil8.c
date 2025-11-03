#include <stdio.h>

int main() {
    int y = 10;
    printf("x = %d\n", y);
    return 0;
}
/*compil8.c: In function 'main':
compil8.c:5:24: error: 'y' undeclared (first use in this function)
     printf("x = %d\n", y);
                        ^
compil8.c:5:24: note: each undeclared identifier is reported only once for each function it appears in

le programme ne compile pas car on appelle une valeur y qui n'est pas initiée*/