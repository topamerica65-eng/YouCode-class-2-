#include <stdio.h>
#include <string.h>

int index = 20;
int i = 0;
char typAnimal[20];
char nom_rechercher[200];
int animalTrouve = 0 ;
char habitat_rechercher[200];
int idrechercher;
char idrechercher1[200];
char espece_rechercher[200];
int choix;
struct zoo
{
	int id;
	char nom[200];
	char espece[200];
	int age;
	char habitat[200];
	float poids;
};
 struct zoo animaux[200] =
      {
          {1, "Simba", "Lion", 5, "Savane", 190.5},
          {2, "Nala", "Lion", 4, "Savane", 175},
          {3, "ShereKhan", "Tigre", 8, "Jungle", 220.3},
          {4, "Baloo", "Ours", 12, "Foret", 310},
          {5, "Raja", "Elephant", 15, "Savane", 540.7},
          {6, "Marty", "Zebre", 6, "Savane", 300.2},
          {7, "Gloria", "Hippopotame", 10, "Riviere", 450},
          {8, "Alex", "Lion", 7, "Savane", 200},
          {9, "Julien", "Lémurien", 3, "Jungle", 12.5},
          {10, "Melman", "Girafe", 9, "Savane", 390.8},
          {11, "Timon", "Suricate", 2, "Desert", 1.2},
          {12, "Pumbaa", "Phacochère", 5, "Savane", 120},
          {13, "Scar", "Lion", 11, "Savane", 210.4},
          {14, "Kaa", "Serpent", 6, "Jungle", 45},
          {15, "Iko", "Perroquet", 4, "Jungle", 2.1},
          {16, "Dumbo", "Elephant", 3, "Savane", 320},
          {17, "Kiki Chien", "sauvage", 7, "Savane", 25},
          {18, "Donatello", "Tortue", 40, "Riviere", 90.5},
          {19, "Polly", "Oiseau", 5, "Jungle", 1.5},
          {20, "Kong", "Gorille", 13, "Jungle", 180}};
          void tir_nom()
{
    int i, j;
    struct zoo tmp;

    i = 0;
    while ( i < index )
    {
        j = i + 1;
        while (j < index)
        {
            if (strcmp(animaux[i].nom, animaux[j].nom) > 0)
            {
                tmp = animaux[i];
                animaux[i] = animaux[j];
                animaux[j] = tmp;
            }
            j++;
        }
        i++;
    }
}
void tir_age() {
    int i, j;
    struct zoo tmp;
    

    i = 0;
    while ( i < index - 1)
    {
        j = i + 1;
        while (j < index)
        {
            if(animaux[i].age, animaux[j].age > 0)
            {
                tmp = animaux[i];
                animaux[i] = animaux[j];
                animaux[j] = tmp;
            }
            j++;
        }
        i++;
    }
}
		  void ajouter_animal()
		  {
		  animaux[index].id = index + 1;
          printf("Entrer le nom d'animal : ");
          fgets(animaux[index].nom, sizeof(animaux[index].nom),stdin);
          printf("Choisir l'espece d'animal : ");
          printf("\n1.  Lion 2.  Tigre 3.  Ours 4.  Elephant 5.  Zebre"
          "6.  Hippopotame 7.  Lemurien 8.  Girafe 9.  Suricate 10.  Serpent"
          "11.  Perroquet 12.  Chien sauvage 13.  Tortue 14.  Oiseau 15.  Gorille\n");
		  printf("Votre choix : ");
		  scanf("%d", &choix);
		  getchar();
		  switch(choix)
		  {
		  case 1 :
		  strcpy(animaux[index].espece,"Lion");
		  break;
		  case 2 :
		  strcpy(animaux[index].espece,"Tigre");
		  break;
		  case 3 :
		  strcpy(animaux[index].espece,"Ours");
		  break;
		  case 4 :
		  strcpy(animaux[index].espece,"Elephant");
		  break;
		  case 5 :
		  strcpy(animaux[index].espece,"Zebre");
		  break;
		  case 6 :
		  strcpy(animaux[index].espece,"Hippopotame");
		  break;
		  case 7 :
		  strcpy(animaux[index].espece,"Lemurien");
		  break;
		  case 8 :
		  strcpy(animaux[index].espece,"Girafe");
		  break;
		  case 9 :
		  strcpy(animaux[index].espece,"Suricate");
		  break;
		  case 10 :
		  strcpy(animaux[index].espece,"Serpent");
		  break;
		  case 11 :
		  strcpy(animaux[index].espece,"Perroquet");
		  break;
		  case 12 :
		  strcpy(animaux[index].espece,"sauvaChienge");
		  break;
		  case 13 :
		  strcpy(animaux[index].espece,"Tortue");
		  break;
		  case 14 :
		  strcpy(animaux[index].espece,"Oiseau");
		  break;
		  case 15 :
		  strcpy(animaux[index].espece,"Gorille");
		  break;
		  default :
		  printf("Le choix invalide \nEntrer les choix disponibles ");
		  }
		  do{
		  printf("Entrer l'age d'animal : ");
		  while(scanf("%d", &animaux[index].age)!=1){
		  printf("Entrer l'age d'animal : ");
		  	while(getchar()!='\n');
		  }
		  }while(animaux[index].age<0 || animaux[index].age>30);
		  printf("Choisir l'habitat d'animal : ");
		  printf("\n1.  Savane 2.  Jungle 3.  Foret 4.  Riviere 5.  Desert\n");
		  printf("Votre choix : ");
		  scanf("%d", &choix);
		  getchar();
		  switch(choix)
		  {
		  case 1 :
		  strcpy(animaux[index].habitat,"Savane");
		  break;
                    case 2 :
                    strcpy(animaux[index].habitat,"Jungle");
                    break;
                    case 3 :
                    strcpy(animaux[index].habitat,"Foret");
                    break;
                    case 4 :
                    strcpy(animaux[index].habitat,"Riviere");
                    break;
				    case 5 :
                    strcpy(animaux[index].habitat,"Desert");
                    break;
				    default :
					printf("Le choix invalide \nEntrer les choix disponibles ");
                    }
                do{
                  printf("Entrer le poids d'animal : ");
                  scanf("%f", &animaux[index].poids);
                  }while(animaux[index].poids<0);
               printf("L'animal ajoute avec succes\n");
               index++;
               }
void ajouter_animaux()
{
	int num ;
	int i = 0;
printf("Combien le nombre d'animaux qui va ajouter ? :  ");
scanf("%d",&num);
getchar();
while(i<num)
{
printf(" ===> %d <===\n ",i+1);
ajouter_animal();
i++;
}
}
void afficher_animaux()
{				  int i;
                  printf("Choisir l'affichage le plus efficace : \n ");
                  printf("1.  Afficher la liste complete\n 2.  Trier par nom\n 3.  Trier par age\n 4.  Afficher uniquement les animaux d'un habitat specifique.\n");
                  printf(" ===> Votre choix : ");
                  scanf("%d",&choix);
                  getchar();
				  switch(choix){
				  case 1 : 
					  i=0;
	                  printf("Afficher la liste complete : \n");
					  while(i<index){
					  printf("\n==>  %d  <==\n",animaux[i].id);
	                  printf("\n     Le nom est : %s ",animaux[i].nom);
	                  printf("    L'espece est : %s ",animaux[i].espece);
	                  printf("    L'age est : %d ",animaux[i].age);
	                  printf("    L'habitat est : %s ",animaux[i].habitat);
	                  printf("    Le poids est : %.2f ",animaux[i].poids);
					  i++;
	                  }
					  break;
				  case 2 :
					  i =0;
					  tir_nom();
	                  printf("Trier par nom : \n");
	                  while(i<index){
					  printf("\n==>  %d  <==\n",animaux[i].id);
	                  printf("\n     Le nom est : %s ",animaux[i].nom);
	                  printf("    L'espece est : %s ",animaux[i].espece);
	                  printf("    L'age est : %d ",animaux[i].age);
	                  printf("    L'habitat est : %s ",animaux[i].habitat);
	                  printf("    Le poids est : %.2f ",animaux[i].poids);
					  i++;
	                  }
	                  break;
				  case 3 :
				  	   i =0;
               	       tir_age();
                       printf("Trier par age : ");
                       while(i<index){
						  printf("\n==>  %d  <==\n",animaux[i].id);
		                  printf("\n     Le nom est : %s ",animaux[i].nom);
		                  printf("    L'espece est : %s ",animaux[i].espece);
		                  printf("    L'age est : %d ",animaux[i].age);
		                  printf("    L'habitat est : %s ",animaux[i].habitat);
		                  printf("    Le poids est : %.2f ",animaux[i].poids);
						  i++;
		                }
                       break;
               case 4 : 
                       printf("Afficher uniquement les animaux d'un habitat specifique : " );
                       printf("\n1.  Savane 2.  Jungle 3.  Foret 4.  Riviere 5.  Desert\n");
                       printf("Choisir l'habitat d'animaux qui est prefere : ");
                       scanf("%d",&choix);
                       getchar();
                       switch(choix)
					   {
                       case 1 :
                       	       strcpy(habitat_rechercher, "Savane");
                               break;
                        case 2 :
                                strcpy(habitat_rechercher, "Jungle");
                                break;
                        case 3 :
                                strcpy(habitat_rechercher, "Foret");
						        break;
                        case 4 :
				               strcpy(habitat_rechercher, "Riviere");
                               break;
                        case 5 :
                                strcpy(habitat_rechercher, "Desert");
                                break;
                        default :
							printf("Le choix invalide \nEntrer les choix disponibles ");
						}
	                    printf("Animaux vivant dans l'habitat %s :\n", habitat_rechercher);
                         for (i = 0; i < index; i++) {
                            if (strcmp(animaux[i].habitat, habitat_rechercher) == 0) {
                                printf("id: %d, Nom: %s, espesce: %s, age: %d, Habitat: %s, poids : %f\n", animaux[i].id, animaux[i].nom, animaux[i].espece, animaux[i].age, animaux[i].habitat, animaux[i].poids);
                                animalTrouve = 1;
                             }
                         }
                         if (!animalTrouve)
							{
                             printf("Aucun animal trouve dans cet habitat.\n");
                            }
                                    break;
									default :
									printf("Le choix invalide \nEntrer les choix disponibles ");
								}
}
void modifier_habitat()
{
printf(" ====> Modifier l'habitat d’un animal. <====\n");
										int idTrouve=0;
										int i=0;
                                        printf("Entrer l'id de l'animal que vous voulez modifier l'habitat : ");
                                        scanf(" %d",&idrechercher);
										while(i<index)
										{
										if(animaux[i].id == idrechercher)
										{
										idTrouve = 1;
									
										}
										i++;
										}
										if(idTrouve==1)
										{
										printf("Entrer le nouveau habitat :");
										scanf("%s",animaux[index].habitat);
										printf("L'habitat est modifier avec succes\n");
										}
										else
										{
										printf("Id introuvable");
										}
}
void modifier_age()
{
printf(" ====> Modifier l'age d’un animal. <====\n");
										int idTrouve=0;
										int i=0;
                                        printf("Entrer l'id de l'animal que vous voulez modifier l'age : ");
                                        scanf(" %d",idrechercher);
										while(i<index)
										{
										if(animaux[i].id == idrechercher)
										{
										idTrouve = 1;
										break;
										}
										i++;
										}
										if(idTrouve==1)
										{
										printf("Entrer le nouveau l'age :");
										scanf("%d",animaux[index].age);
										printf("L'age est modifier avec succes\n");
										}
										else
										{
										printf("L'age introuvable");
										}
}
void supprimer_animal()
{
int id_Supprimer;
			    int trouve;
		        printf("Quelle est l'id de l'animal que voulez Supprimer : ");
			    scanf(" %d",&id_Supprimer);
			     for(int i = 0; i < index; i++)
				 {
                      if(animaux[i].id == id_Supprimer)
					  {
                      trouve = 1;
                      for(int j = i; j < index - 1; j++)
					  {
                       animaux[j] = animaux[j + 1];
                      }
                    break;
                      }
                 }
                     if (trouve)
					 {
                      printf("Animal avec id %d supprime avec succes.\n",id_Supprimer);
                     }
					 else
					 {
                      printf("Aucun animal trouve avec l'id %d\n", id_Supprimer);
                     }
}
void recherche_id()
{
int i=0;
                                int idTrouve=0;
                                printf("Entrer l'id de l'animal qui va rechercher : ");
                                scanf(" %d",&idrechercher);
                                 while(i<index)
								 {
								if(animaux[i].id == idrechercher)
								{
								printf("L'id est disponible\n");
								idTrouve = 1;
								break;
								}
								i++;
								}
								if(idTrouve==1)
								{
								printf("Id : %d\n",animaux[i].id);
								printf("Nom : %s\n",animaux[i].nom);
								printf("Espece : %s\n",animaux[i].nom);
								printf("Age : %d\n",animaux[i].age);
								printf("Habitat : %s\n",animaux[i].habitat);
								printf("Poids : %f\n",animaux[i].poids);
								i++;
								}
								if(idTrouve==0){
								printf("L'id n'est pas disponible");
								}	
}
void recherche_nom()
{
int i=0;
                           int nom_Trouve=0;
						   printf("Entrer le nom de l'animal qui va rechercher : ");
                           scanf(" %s",nom_rechercher);
						   while(i<index)
						   {
						   if(animaux[i].nom == nom_rechercher)
						   {
						   printf("le nom est disponible\n");
						   nom_Trouve = 1;
						   break;
						   }
						   i++;
						   }
						   if(nom_Trouve==1)
						   {
						   printf("Id : %d\n",animaux[i].id);
						   printf("Nom : %s\n",animaux[i].nom);
						   printf("Espece : %s\n",animaux[i].espece);
						   printf("Age : %d\n",animaux[i].age);
						   printf("Habitat : %s\n",animaux[i].habitat);
						   printf("Poids : %f\n",animaux[i].poids);
						   i++;
							}
							if(nom_Trouve==0){
							printf("Le nom n'est pas disponible");
							}
}
void recherche_espece()
{
int i=0;
                           int espece_Trouve=0;
						   printf("Entrer l'espece de l'animal qui va rechercher : ");
                           scanf(" %s",idrechercher);
						   while(i<index)
						   {
						  if(strcmp(animaux[i].espece, idrechercher1) == 0)
						   {
						   printf("l'espece est disponible\n");
						   espece_Trouve = 1;
						   break;
						   }
						   i++;
						  }
						   if(espece_Trouve==1)
						   {
						   printf("Id : %d\n",animaux[i].id);
						   printf("Nom : %s\n",animaux[i].nom);
						   printf("Espece : %s\n",animaux[i].espece);
						   printf("Age : %d\n",animaux[i].age);
						   printf("Habitat : %s\n",animaux[i].habitat);
						   printf("Poids : %f\n",animaux[i].poids);
						   i++;
						   }
							if(espece_Trouve==0){
							printf("Le espece n'est pas disponible");
							}
}
void statistiques()
{
	char plusVieux[50],plusJeune[50];
	int MaxAge = animaux[0].age;
	int MinAge = animaux[0].age;
	
	
    int S = 0;
    tir_age();
    int  maxrep = 0; 
    char comp[20];
							for(int i=0;i<index;i++){
							S +=  animaux[i].age;
							if(animaux[i].age> MaxAge)
							{
								MaxAge = animaux[i].age;
								strcpy(plusVieux,animaux[i].nom);
							}
							if(animaux[i].age< MaxAge)
							{
								MinAge = animaux[i].age;
								strcpy(plusJeune,animaux[i].nom);
							}
							}
							printf("Nombre total d'animaux dans le zoo est : %d\n",index);
							float M = (float)S / index ;
							printf("Age moyen des animaux est %.2f\n",M);
							
							printf("Plus vieux animal est %s age %d\n", plusVieux, MaxAge);
							printf("Plus jeune est %s age %d \n", plusJeune, MinAge);
							for (int i = 0 ; i < index ; i++)
           {
               int count = 1;
               for (int j = i + 1; j < index ; j++)
               {
                   if (strcmp(animaux[i].espece , animaux[j].espece) == 0)
                   {

                       count++;

                   }
               }
               if (count > maxrep)
               {
                   maxrep = count;
                   strcpy(comp , animaux[i].espece);
               }
           }
           printf("Le espece le plus representees : %s", comp);
					
}
int main(){  
    int max,min,i=0; 
    int choix1, choix;
    char typeAnimal[20];
    do{ 
        printf("\n==== MENU ====\n");
        printf("1.  Ajouter un animal\n");
        printf("2. Afficher les animaux\n");                                 
        printf("3. Modifier un animal\n");
		printf("4. Supprimer un animal\n");                                           
        printf("5. Rechercher un animal\n");
        printf("6. Statistiques\n");
        printf("0. Quitter\n");
        printf("Votre choix : ");
        scanf("%d", &choix);
        getchar();
        switch(choix)
        {
        case 1 :
		do{
			printf("1.  Ajouter un animal\n");
        	printf("2.  Ajouter plusieurs animaux\n");
        	printf("3.  Reteur au menu principale\n");
        	printf("Votre choix : ");
            scanf("%d", &choix1);
            getchar();
        	switch(choix1)
            {
              	case 1 :
                  ajouter_animal();
                  break;
                  case 2 : 
                  ajouter_animaux();
                  break;
                  default :
                   printf("Le choix invalide \nEntrer les choix disponibles\n ");
            }
		}while(choix1 != 3);
		break;
    
                  case 2 :
                  afficher_animaux();
                  break;
                  case 3 :
									printf(" ====> Modifier d'un animal <====");
									printf(" 1.  Modifier l'habitat d’un animal.\n 2.  Modifier l'age.\n");
									printf("Choisir la modification  d'animal qui est prefere : ");
									scanf("%d",&choix);
                                    getchar();
                                    switch(choix)
									{
									case 1 :
										modifier_habitat();
                                        break;
									case 2 :
										modifier_age();
                                        break;
										default :
									    printf("Le choix invalide \nEntrer les choix disponibles ");	
									break;
								}
                  case 4 :
                  supprimer_animal();
                  break;
		          case 5 :
			    printf(" ====> Rechercher un animal <====\n");
			    printf("1.  Rechercher par id 2.  Rechercher par nom 3.  Rechercher par espece\n");
			    printf("Choisir la methode par rechercher :  ");
			    scanf("%d",&choix);
                getchar();
                switch(choix)
					   {
					   	case 1 :
                           recherche_id();
					   	break;
					   	case 2 :
                           recherche_nom();
                           break;
					   	case 3 :
                           recherche_espece();
                           break;
                        default:
							printf("Le choix invalide \nEntrer les choix disponibles ");
							break;
						    }
						    case 6 :
							statistiques();
							break;
        case 0 :
                printf("Au revoir");
                break;
        default:
         printf("Le choix invalide \nEntrer les choix disponibles ");
        }
  }while(choix != 0);
  return 0;
}