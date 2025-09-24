#include <stdio.h>
#include <stdlib.h>
int main(){
	int n , S;
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
 
        for (int i = 0; i < n; i++) {
        S += arr[i];
    }

    
    printf("La somme des elements est : %d\n", S);
}

