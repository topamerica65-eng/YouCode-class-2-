#include <stdio.h>
#include <string.h>

int index = 20;
int i = 0;
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
 struct zoo a0[200] =
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
            if (strcmp(a0[i].nom, a0[j].nom) > 0)
            {
                tmp = a0[i];
                a0[i] = a0[j];
                a0[j] = tmp;
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
            if(a0[i].age, a0[j].age > 0)
            {
                tmp = a0[i];
                a0[i] = a0[j];
                a0[j] = tmp;
            }
            j++;
        }
        i++;
    }
}
		  void ajouter_animal()
		  {
		  a0[index].id = index + 1;
          printf("Entrer le nom d'animal : ");
          fgets(a0[index].nom, sizeof(a0[index].nom),stdin);
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
		  strcpy(a0[index].espece,"Lion");
		  break;
		  case 2 :
		  strcpy(a0[index].espece,"Tigre");
		  break;
		  case 3 :
		  strcpy(a0[index].espece,"Ours");
		  break;
		  case 4 :
		  strcpy(a0[index].espece,"Elephant");
		  break;
		  case 5 :
		  strcpy(a0[index].espece,"Zebre");
		  break;
		  case 6 :
		  strcpy(a0[index].espece,"Hippopotame");
		  break;
		  case 7 :
		  strcpy(a0[index].espece,"Lemurien");
		  break;
		  case 8 :
		  strcpy(a0[index].espece,"Girafe");
		  break;
		  case 9 :
		  strcpy(a0[index].espece,"Suricate");
		  break;
		  case 10 :
		  strcpy(a0[index].espece,"Serpent");
		  break;
		  case 11 :
		  strcpy(a0[index].espece,"Perroquet");
		  break;
		  case 12 :
		  strcpy(a0[index].espece,"sauvaChienge");
		  break;
		  case 13 :
		  strcpy(a0[index].espece,"Tortue");
		  break;
		  case 14 :
		  strcpy(a0[index].espece,"Oiseau");
		  break;
		  case 15 :
		  strcpy(a0[index].espece,"Gorille");
		  break;
		  default :
		  printf("Le choix invalide \nEntrer les choix disponibles ");
		  }
		  do{
		  printf("Entrer l'age d'animal : ");
		  while(scanf("%d", &a0[index].age)!=1){
		  printf("Entrer l'age d'animal : ");
		  	while(getchar()!='\n');
		  }
		  }while(a0[index].age<0 || a0[index].age>30);
		  printf("Choisir l'habitat d'animal : ");
		  printf("\n1.  Savane 2.  Jungle 3.  Foret 4.  Riviere 5.  Desert\n");
		  printf("Votre choix : ");
		  scanf("%d", &choix);
		  getchar();
		  switch(choix)
		  {
		  case 1 :
		  strcpy(a0[index].habitat,"Savane");
		  break;
                    case 2 :
                    strcpy(a0[index].habitat,"Jungle");
                    break;
                    case 3 :
                    strcpy(a0[index].habitat,"Foret");
                    break;
                    case 4 :
                    strcpy(a0[index].habitat,"Riviere");
                    break;
				    case 5 :
                    strcpy(a0[index].habitat,"Desert");
                    break;
				    default :
					printf("Le choix invalide \nEntrer les choix disponibles ");
                    }
                do{
                  printf("Entrer le poids d'animal : ");
                  scanf("%f", &a0[index].poids);
                  }while(a0[index].poids<0);
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
					  printf("\n==>  %d  <==\n",a0[i].id);
	                  printf("\n     Le nom est : %s ",a0[i].nom);
	                  printf("    L'espece est : %s ",a0[i].espece);
	                  printf("    L'age est : %d ",a0[i].age);
	                  printf("    L'habitat est : %s ",a0[i].habitat);
	                  printf("    Le poids est : %.2f ",a0[i].poids);
					  i++;
	                  }
					  break;
				  case 2 :
					  i =0;
					  tir_nom();
	                  printf("Trier par nom : \n");
	                  while(i<index){
					  printf("\n==>  %d  <==\n",a0[i].id);
	                  printf("\n     Le nom est : %s ",a0[i].nom);
	                  printf("    L'espece est : %s ",a0[i].espece);
	                  printf("    L'age est : %d ",a0[i].age);
	                  printf("    L'habitat est : %s ",a0[i].habitat);
	                  printf("    Le poids est : %.2f ",a0[i].poids);
					  i++;
	                  }
	                  break;
				  case 3 :
				  	   i =0;
               	       tir_age();
                       printf("Trier par age : ");
                       while(i<index){
						  printf("\n==>  %d  <==\n",a0[i].id);
		                  printf("\n     Le nom est : %s ",a0[i].nom);
		                  printf("    L'espece est : %s ",a0[i].espece);
		                  printf("    L'age est : %d ",a0[i].age);
		                  printf("    L'habitat est : %s ",a0[i].habitat);
		                  printf("    Le poids est : %.2f ",a0[i].poids);
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
                            if (strcmp(a0[i].habitat, habitat_rechercher) == 0) {
                                printf("id: %d, Nom: %s, espesce: %s, age: %d, Habitat: %s, poids : %f\n", a0[i].id, a0[i].nom, a0[i].espece, a0[i].age, a0[i].habitat, a0[i].poids);
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
										if(a0[i].id == idrechercher)
										{
										idTrouve = 1;
									
										}
										i++;
										}
										if(idTrouve==1)
										{
										printf("Entrer le nouveau habitat :");
										scanf("%s",a0[index].habitat);
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
										if(a0[i].id == idrechercher)
										{
										idTrouve = 1;
										break;
										}
										i++;
										}
										if(idTrouve==1)
										{
										printf("Entrer le nouveau l'age :");
										scanf("%d",a0[index].age);
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
                      if(a0[i].id == id_Supprimer)
					  {
                      trouve = 1;
                      for(int j = i; j < index - 1; j++)
					  {
                       a0[j] = a0[j + 1];
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
								if(a0[i].id == idrechercher)
								{
								printf("L'id est disponible\n");
								idTrouve = 1;
								break;
								}
								i++;
								}
								if(idTrouve==1)
								{
								printf("Id : %d\n",a0[i].id);
								printf("Nom : %s\n",a0[i].nom);
								printf("Espece : %s\n",a0[i].nom);
								printf("Age : %d\n",a0[i].age);
								printf("Habitat : %s\n",a0[i].habitat);
								printf("Poids : %f\n",a0[i].poids);
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
						   if(a0[i].nom == nom_rechercher)
						   {
						   printf("le nom est disponible\n");
						   nom_Trouve = 1;
						   break;
						   }
						   i++;
						   }
						   if(nom_Trouve==1)
						   {
						   printf("Id : %d\n",a0[i].id);
						   printf("Nom : %s\n",a0[i].nom);
						   printf("Espece : %s\n",a0[i].espece);
						   printf("Age : %d\n",a0[i].age);
						   printf("Habitat : %s\n",a0[i].habitat);
						   printf("Poids : %f\n",a0[i].poids);
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
						  if(strcmp(a0[i].espece, idrechercher1) == 0)
						   {
						   printf("l'espece est disponible\n");
						   espece_Trouve = 1;
						   break;
						   }
						   i++;
						  }
						   if(espece_Trouve==1)
						   {
						   printf("Id : %d\n",a0[i].id);
						   printf("Nom : %s\n",a0[i].nom);
						   printf("Espece : %s\n",a0[i].espece);
						   printf("Age : %d\n",a0[i].age);
						   printf("Habitat : %s\n",a0[i].habitat);
						   printf("Poids : %f\n",a0[i].poids);
						   i++;
						   }
							if(espece_Trouve==0){
							printf("Le espece n'est pas disponible");
							}
}
void statistiques()
{
	char max[50],min[50];
    int S = 0;
    tir_age();
    int  maxrep = 0; 
    char comp[20];
							for(int i=0;i<index;i++){
							S +=  a0[i].id;
							}
							printf("Nombre total d'animaux dans le zoo est : %d\n",index+1);
							float M = S / index ;
							printf("Age moyen des animaux est %d\n",M);
							printf("Plus jeune animal est %s age %d\n",a0[0].nom,a0[0].age);
							printf("Plus vieux est %s age %d \n",a0[index-1].nom,a0[index-1].age);
							for (int i = 0 ; i < index ; i++)
           {
               int count = 1;
               for (int j = i + 1; j < index ; j++)
               {
                   if (strcmp(a0[i].espece , a0[j].espece) == 0)
                   {

                       count++;

                   }
               }
               if (count > maxrep)
               {
                   maxrep = count;
                   strcpy(comp , a0[i].espece);
               }
           }
           printf("Le espece le plus representees : %s", comp);
					
}
int main(){  
    int max,min,i=0; 
    int choix1, choix;
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
