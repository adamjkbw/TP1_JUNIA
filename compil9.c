#include <stdio.h>

int main() {
    char s[5] = "Hello";
    printf("%s\n", s);
    return 0;
}
/*compil9.c: In function 'main':
compil9.c:4:17: warning: initializer-string for array of chars is too long
     char s[3] = "Hello";
                 ^~~~~~~

On n'a pas donné assez de place pour Hello dans s

                 */