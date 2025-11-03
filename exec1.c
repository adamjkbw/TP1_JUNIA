#include <stdio.h>
#include <assert.h>

int main() {
    int a = 2;
    int b = 0;

    assert(b != 0 && "Division par 0");
    int c = a / b;  // crash / comportement indéfini
    printf("%d\n", c);
    return 0;
}
/*Division par 0*/