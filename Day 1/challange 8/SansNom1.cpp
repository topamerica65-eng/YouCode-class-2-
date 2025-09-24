#include <stdio.h>
#include <stdlib.h>
int main() {
    double a, b, c, moyenne;
    printf("Veuillez entrer le premier nombre : ");
    scanf("%lf", &a);

    printf("Veuillez entrer le deuxieme nombre : ");
    scanf("%lf", &b);
    printf("Veuillez entrer le troisieme nombre : ");
    scanf("%lf", &c);
    moyenne = (a * 2 + b * 3 + c * 5) / (2 + 3 + 5);
    printf("La moyenne ponderee est : %.2lf\n", moyenne);

    return 0;
}
