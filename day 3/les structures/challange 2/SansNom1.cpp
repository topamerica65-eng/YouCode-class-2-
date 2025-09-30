#include <stdio.h>

	struct etudiant
	{
		char nom[30];
		char prenom[30];
		float notes[3];
	};
int main()
{
 struct etudiant o1 = {"Fellahi","Mouad", {12.0,19.0,15.0}};
 printf("L'etudiant %s %s il a obtenu les notes suivantes : %.2f, %.2f ,%.2f",o1.nom,o1.prenom,o1.notes[0],o1.notes[1],o1.notes[2]);
	
	
	
	
	
	return 0;
}
