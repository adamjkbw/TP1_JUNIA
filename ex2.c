#include <stdio.h>
#include <math.h>

int main() {
    double C = 0.0;
    double t = 0.0;
    int n = 0;

    printf("Rentrez le montant de votre pret : ");
    scanf("%lf", &C);

    printf("Quel est votre taux d'intéret annuel (en pourcentage, ex: 5 pour 5%%) : ");
    scanf("%lf", &t);

    printf("Quelle est la duree du pret (en annees) : ");
    scanf("%d", &n);

    // Conversion du taux en décimal
    t = t / 100;

    double tauxMensuel = t / 12;
    double M = (C * tauxMensuel) / (1 - pow(1 + tauxMensuel, -n * 12));

    printf("Votre mensualite est : %.2f\n", M);

    return 0;
}