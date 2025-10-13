#include <stdio.h>

int main(){
    
    /*Ex 1*/
    int sec = 0;
    printf("Donnez un nombre de secondes : ");
    scanf("%d", &sec);
    int heure = sec / 3600;
    int min = (sec - 3600 * heure)/60;
    int sec_reste = sec - 3600*heure - 60 * min;

    printf("%d secondes = %d heures, %d minutes et %d secondes", sec,heure, min , sec_reste);
    return 0;

} 
// salut adam c'est ton super binome : Louis //