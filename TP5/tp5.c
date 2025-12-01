#include <windows.h>
#include <locale.h>
#include "menu.h"
#include <stdio.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, ".UTF-8");
    int choixx = 0;
    int conso[7];

    while (choixx != 3)
    {
        menu();
        choixx = choix();
        if (choixx == 1)
        {
            ajouterConsommation(conso);
        }
    }

    return 0;
}
