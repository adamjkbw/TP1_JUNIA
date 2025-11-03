#include <stdio.h>

int main() {
    int abc = 5;
    printf("%d\n", abc);
    return 0;
}
/*compil10.c: In function 'main':
compil10.c:4:9: error: invalid suffix "abc" on integer constant
     int 1abc = 5;
         ^~~~
compil10.c:4:9: error: expected identifier or '(' before numeric constant
compil10.c:5:20: error: invalid suffix "abc" on integer constant
     printf("%d\n", 1abc);
                    ^~~~

On ne peut pas mettre de nombre dans le nom d'une variable
*/