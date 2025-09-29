#include <stdio.h>
 struct personne{
 	char nom[30];
 	char prenom[30];
 	int age;
 };



int main(){
	struct personne p1 = {"Talbioui","Imad",18};
	printf("Le personne s'appelle %s %s et age %d ans.\n", p1.nom, p1.prenom, p1.age);
	
	
	
	
	return 0;
}
