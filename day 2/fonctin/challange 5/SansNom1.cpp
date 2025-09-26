#include <stdio.h>

int fact(int n){
	int t = 1;
	for(int i=1;i<=n;i++){
	t = t*i;	
	}
	return t;
}


int main(){
	int a;
   	printf("Veuillez enter la factorielle : ");
   	scanf("%d",&a);
	printf("La factorielle d'un nombre est : %d",fact(a) );
	
	
	return 0;
}
