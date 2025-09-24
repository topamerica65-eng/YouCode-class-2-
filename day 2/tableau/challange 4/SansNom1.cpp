#include <stdio.h>
#include <stdlib.h>
int main(){
	int n , Max;
	int arr[n];
	printf("Veuillez entrer les nombres d'elements d'un tableau : ");
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
        printf("Veuillez entrez l'element %d : ", i+1 );
        scanf("%d", &arr[i]);
}
    printf("Les elements du tableau sont :\n");
    for (int i = 0; i < n; i++) {
        printf("%d\n",arr[i]);
    }
 
        
        Max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > Max) {
            Max = arr[i];
        }
    }
   printf("Le plus grand element du tableau est : %d\n", Max);

    }

