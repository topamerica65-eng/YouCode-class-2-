#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


	
	
	int main(){
	
    char nom[10];
    char prenom[10];
    int age;
    char sexe[10];
    char adresse_email[10];

    printf("Veuillez entrez votre nom : ");
    scanf("%s", nom);
	printf("Veuillez entrez votre prenom : ");
    scanf("%s", prenom);
	printf("Veuillez entrez votre age : ");
    scanf("%d", &age);
	printf("Veuillez entrez votre sexe : ");
    scanf("%s", sexe); 
	printf("Veuillez entrez votre adresse email : ");
    scanf("%s", adresse_email);
    
   printf("Votre nom est %s, votre prenom est %s, votre age est %d ans, votre sexe est %s et votre adresse email est %s\n",
           nom, prenom, age, sexe, adresse_email);
   

	return 0;
}

