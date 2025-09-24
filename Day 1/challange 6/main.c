
#include <stdio.h>
#include <stdlib.h>
int main() {
    double a, b;
    
    printf("Veuillez entrer le premier nombre  : ");
    scanf("%lf", &a);

    printf("Veuillez entrer le deuxieme nombre  : ");
    scanf("%lf", &b);
    printf("a + b = %.2lf\n", a + b);
    printf("a - b = %.2lf\n", a - b);
    printf("a * b = %.2lf\n", a * b);
    printf("a / b = %.2lf\n", a / b);

    return 0;
}
