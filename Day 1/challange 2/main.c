#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float celsius, kelvin;

    printf("Veuillez entrer la temperature en Celsius : ");
    scanf("%f", &celsius);
    kelvin = celsius + 273.15;
    printf("La temperature en Kelvin est : %.2f", kelvin);

	 
	   
	
	
	return 0;
}
