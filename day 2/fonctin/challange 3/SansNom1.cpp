#include <stdio.h>

int minimum(int a , int b){
	if(a<b){
		return a;  
	}
	return b;	
}


int main(){
   	
	printf("Le minimum est : %d", minimum(63,43));
	
	
	return 0;
}
