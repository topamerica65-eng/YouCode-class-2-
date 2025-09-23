#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


	
	
	int main(){
	
    float km , m;

    printf("Veuillez entrez la vitesse en kilometres par heure (km/h) : ");
    scanf("%f", &km);
    m = km * 0.27778;
    printf("%.2f km/h correspond a %.2f m/s", km, m);
	
	return 0;
}

