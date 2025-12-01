#include "menu.h"
#include <stdio.h>

int main()
{
    int choixx = 0;
    int conso[7];

    while (choixx != 3)
    {
        menu();
        choixx = choix();
    }

    return 0;
}
