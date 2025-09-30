#include <stdio.h>
#include <string.h>
struct animal {
	int id;
	char nom[30];
	char espece[30];
	int age;
	char habitat[30];
	float poids;
};
struct animal animaux[20]={1,"Simba","Lion",5,"Savane",190.5},{2,"Nala","Lion",4,"Savane",175},{3,"ShereKhan","Tigre",8,"Jungle",220.3},{4,"Baloo","Ours",12,"Foret",310},
{5,"Raja","Elephant",15,"Savane",540.7},{6,"Marty","Zebre",6,"Savane",300.2},{7,"Gloria","Hippopotame",10,"Riviere",450},{8,"Alex","Lion",7,"Savane",200},
{9,"Julien","Lemurien",3,"Jungle",12.5},{10,"Melman","Girafe",9,"Savane",390.8},{11,"Timon","Suricate",2,"Desert",1.2},{12,"Pumbaa","Phacochere",5,"Savane",120},
{13,"Scar","Lion",11,"Savane",210.4},{14,"Kaa","Serpent",6,"Jungle",45},{15,"Iko","Perroquet",4,"Jungle",2.1},{16,"Dumbo","Elephant",3,"Savane",320},
{17,"Kiki","Chien sauvage",7,"Savane",25},{18,"Donatello","Tortue",40,"Riviere",90.5},{19,"Polly","Oiseau",5,"Jungle",1.5},{20,"Kong","Gorille",13,"Jungle",180}}

int main(){            
    int choix,choix1;
    do{
        printf("\n====MENU ====\n");
        printf("1.  Ajouter un animal\n");
        printf("2. Afficher les animaux\n");                                 
        printf("3. Modifier un animal\n");
		printf("4. Supprimer un animal\n");                                           
        printf("5. Rechercher un animal\n");
        printf("6. Statistiques\n");
        printf("7. Quitter\n");
        printf("Votre choix : ");
        scanf("%d", &choix);
        getchar();
        switch(choix){
        case 1 :
		do{
        	printf("1.  Ajouter un animal\n");
        	printf("2.  Ajouter plusieurs animaux\n");
        	printf("Votre choix : ");
            scanf("%d", &choix1);
            getchar();
        	switch(choix1){
              	case 1 :
               printf("Entrer le nom d'animal : ");
               fgets(a0[index].nom, sizeof(a0[index].nom),stdin);
               printf("Choisir l'espece d'animal : ");
               do{
               	
			   }
               fgets(a0[index].espece, sizeof(a0[index].espece),stdin);
               printf("Entrer l'age d'animal : ");
               fgets(a0[index].age, sizeof(a0[index].age),stdin);
               printf("L'animal ajoute avec succes\n");
               index++;
              		break;
              	case 2 : 
              	    break;
			  }
			break;
		
              
               break;
        case 2 :
               
               break;           
        case 3 :
               
			   break;
        case 4 : 
               
               break;
		case 5 :
               
                break;
        case 6 :
        	
        	    break;
        case 7 :
                printf("Au revoir");
                break;
        default :
         printf("Le choix invalide \nEntrer les choix disponibles ");
        }       
               
    }while(choix != 7);

