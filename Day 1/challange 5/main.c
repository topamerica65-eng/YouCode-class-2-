#include <stdio.h>
#include <stdlib.h>



	
	
	int main(){
	
     float temperature;
    printf("Entrez la temperature en Celsius : ");
    scanf("%f", &temperature);
    if (temperature < 0) {
        printf("A %.2f°C, l'eau est a l'etat solide.", temperature);
    } 
	else if (temperature >= 0 && temperature < 100) {
        printf("A %.2f°C, l'eau est a l'etat liquide.", temperature);
    }
	else {
        printf(" A %.2f°C, l'eau est a l'etat gaz.", temperature);
    }
	
	return 0;
}

