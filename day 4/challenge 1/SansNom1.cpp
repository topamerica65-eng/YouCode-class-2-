#include <stdio.h>

void croissante(int t[])
{
	int tmp ;
	for(int i=0;i<7;i++)
	{
		for(int j=0;j<8-i-1;j++){
			if(t[j]>t[j+1]){
				tmp = t[j];
				t[j]=t[j+1];
				t[j+1]=tmp;
				
				
			}
		}
		
		
	}
}
int main()
{
	int t[] = {43, 78, 11, 0, 6, 88, 76, 12};
	printf("L'affichage de tableau avant le tri :  ");
	for(int i=0;i<8;i++)
		printf("%d ,",t[i]);
		croissante(t);
			printf("\nL'affichage de tableau apres le tri :  ");
	for(int i=0;i<8;i++){
		printf("%d ,",t[i]);
	}  
	




return 0;	
}
