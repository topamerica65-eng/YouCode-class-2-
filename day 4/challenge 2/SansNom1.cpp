#include <stdio.h>

void croissante(int t[])
{
	int tmp ,index_min ;
	for(int i=0;i<7;i++)
	{                                                                             
		index_min = i;
		for(int j=i+1;j<8;j++)
		{
			if(t[j]<t[index_min])
			{
			index_min = j;
		    }
		}
		tmp = t[index_min];
		t[index_min]=t[i];
		t[i]=tmp;
	}		
}

int main()
{
	int t[] = {43, 78, 11, 0, 6, 88, 76, 12};
	printf("L'affichage de tableau avant le tri :  ");
	for(int i=0;i<8;i++)
	{
		printf("%d ,",t[i]);
	}
	croissante(t);
	printf("\nL'affichage de tableau apres le tri :  ");
	for(int i=0;i<8;i++){
		printf("%d ,",t[i]);
	}  
	




return 0;	
}
