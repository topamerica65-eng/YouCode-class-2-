#include <stdio.h>
#include <string.h>

int index = 20;
char nom_rechercher[200];
int animalTrouve = 0 ;
char habitat_rechercher[200];
int id_rechercher;
char espece_rechercher[200];

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
          {4, "Baloo", "Ours", 12, "Forêt", 310},
          {5, "Raja", "Éléphant", 15, "Savane", 540.7},
          {6, "Marty", "Zèbre", 6, "Savane", 300.2},
          {7, "Gloria", "Hippopotame", 10, "Rivière", 450},
          {8, "Alex", "Lion", 7, "Savane", 200},
          {9, "Julien", "Lémurien", 3, "Jungle", 12.5},
          {10, "Melman", "Girafe", 9, "Savane", 390.8},
          {11, "Timon", "Suricate", 2, "Désert", 1.2},
          {12, "Pumbaa", "Phacochère", 5, "Savane", 120},
          {13, "Scar", "Lion", 11, "Savane", 210.4},
          {14, "Kaa", "Serpent", 6, "Jungle", 45},
          {15, "Iko", "Perroquet", 4, "Jungle", 2.1},
          {16, "Dumbo", "Éléphant", 3, "Savane", 320},
          {17, "Kiki Chien", "sauvage", 7, "Savane", 25},
          {18, "Donatello", "Tortue", 40, "Rivière", 90.5},
          {19, "Polly", "Oiseau", 5, "Jungle", 1.5},
          {20, "Kong", "Gorille", 13, "Jungle", 180}};
void tir_alpha() {
    int i, j;
    struct zoo tmp;

    i = 0;
    while ( i < index - 1)
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

int main(){
    int max,min,i=0;
    int choix;
    do{
        printf("\n====MENU ====\n");
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
        switch(choix){
        case 1 :
		do{
        	printf("1.  Ajouter un animal\n");
        	printf("2.  Ajouter plusieurs animaux\n");
            printf("0.  Reteur a menu principal\n");
        	printf("Votre choix : ");
            scanf("%d", &choix);
            getchar();
        	switch(choix){
              	case 1 :
               a0[index].id = index + 1;
               printf("Entrer le nom d'animal : ");
               fgets(a0[index].nom, sizeof(a0[index].nom),stdin);
               printf("Choisir l'espece d'animal : ");
                  printf("1.  Lion 2.  Tigre 3.  Ours 4.  Elephant 5.  Zebre"
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
					printf("Entrer l'age d'animal : ");
                    scanf("%d", &a0[index].age);
                    printf("Choisir l'habitat d'animal : ");
                    printf("1.  Savane 2.  Jungle 3.  Foret 4.  Riviere 5.  Desert\n");
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
                  printf("Entrer le poids d'animal : ");
                  scanf("%f", &a0[index].poids);
               printf("L'animal ajoute avec succes\n");
               index++;
              		break;
              	case 2 :
                  printf("Combien le nombre d'animaux qui va ajouter :  ");
                  scanf("%d",&index);
                  while(i<index)
               {
                   printf("==> %d <=== ",i+1);
                   while(i<index)
                   a0[index].id = index + 1;
               printf("Entrer le nom d'animal : ");
               fgets(a0[index].nom, sizeof(a0[index].nom),stdin);
               printf("Choisir l'espece d'animal : ");
                  printf(" 1.  Lion 2.  Tigre 3.  Ours 4.  Elephant 5.  Zebre"
                  " 6.  Hippopotame 7.  Lemurien 8.  Girafe 9.  Suricate 10.  Serpent"
                    "11.  Perroquet 12.   sauvaChienge 13.  Tortue 14.  Oiseau 15.  Gorille\n");
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
                   printf("Entrer l'age d'animal : ");
                   scanf("%d", &a0[index].age);
                   printf("Choisir l'habitat d'animal : ");
                   printf("1.  Savane 2.  Jungle 3.  Foret 4.  Riviere 5.  Desert\n");
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
                  printf("Entrer le poids d'animal : ");
                  scanf("%f", &a0[index].poids);
                  printf("L'animal ajoute avec succes\n");
                   i++;
                  break;
				  }while(choix != 0);
				  break;
			      }
				  case 2 :
				  printf("Choisir l'affichage le plus efficace : ");
                  printf("1.  Afficher la liste complete 2.  Trier par nom 3.  Trier par age 4.  Afficher uniquement les animaux d'un habitat specifique.");
                  printf("Votre choix : ");
                  scanf("%d",&choix);
                  getchar();
				  switch(choix)
				  {
		       case 1 :
				  int i=0;
				  int id = 0;
                  printf("Afficher la liste complete : \n");
				  while(i<index)
                      {
                       printf("==>  %d  <==",id+1);
                       printf("\n     Le nom est : %s ",a0[i].nom);
                       printf("    L'espece est : %s ",a0[i].espece);
                       printf("    L'age est : %d ",a0[i].age);
                       printf("    L'habitat est : %s ",a0[i].habitat);
                       printf("    Le poids est : %f ",a0[i].poids);
                   id++;
                  }
				  break;
               case 2 :
                       tir_alpha();
                       printf("Trier par nom : \n");
                       break;
               case 3 :
               	       tir_age();
                       printf("Trier par age : ");
                       break;
               case 4 :
                       printf("Afficher uniquement les animaux d'un habitat specifique : " );
                       printf("1.  Savane 2.  Jungle 3.  Foret 4.  Riviere 5.  Desert\n");
                       printf("Choisir l'habitat d'animaux qui est prefere(1-5) : ");
                       scantf("%d",&choix);
                       getchar();
                       switch(choix)
					   {
                       case 1 :
                       	       strcpy(habitat_rechercher, "Savane")
                               break;
                        case 2 :
                                strcpy(habitat_rechercher, "Jungle")
                                break;
                        case 3 :
                                strcpy(habitat_rechercher, "Foret")
						        break;
                        case 4 :
				               strcpy(habitat_rechercher, "Riviere")
                               break;
                        case 5 :
                                strcpy(habitat_rechercher, "Desert")
                                break;
                        default :
						printf("Le choix invalide \nEntrer les choix disponibles ");
                        return 1;
                                 printf("Animaux vivant dans l'habitat '%s' :\n", habitat_rechercher);
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
									}
                                    break;
									default :
									printf("Le choix invalide \nEntrer les choix disponibles ");
								}
									case 3 :
									printf(" ====> Modifier d'un animal <====");
									printf(" 1.  Modifier l'habitat d’un animal.\n 2.  Modifier l'age.\n");
									printf("Choisir la modification  d'animal qui est prefere(1 ou 2) : ");
									scantf("%d",&choix);
                                    getchar();
                                    switch(choix)
									{
									case 1 :
										{
										printf(" ====> Modifier l'habitat d’un animal. <====");
										int idTrouve=0;
										int i=0;
                                        printf("Entrer l'id de l'animal que vous voulez modifier l'habitat : ");
                                        scanf(" %d",id_rechercher);
										while(i<index)
										{
										if(strcmp(a0[i].id,id_rechercher)==0)
										{
										idTrouve = 1;
										break;
										}
										i++;
										}
										if(idTrouve==1)
										{
										printf("Entrer le nouveau habitat :");
										fgets(a0[index].habitat, sizeof(a0[index].habitat),stdin);
										printf("L'habitat est modifier avec succes\n");
										}
										else
										{
										printf("Id introuvable");
										}
										break;
									}
									case 2 :
										{
										printf(" ====> Modifier l'age d’un animal. <====");
										int idTrouve=0;
										int i=0;
                                        printf("Entrer l'id de l'animal que vous voulez modifier l'age : ");
                                        scanf(" %d",id_rechercher);
										while(i<index)
										{
										if(strcmp(a0[i].id,id_rechercher)==0)
										{
										idTrouve = 1;
										break;
										}
										i++;
										}
										if(idTrouve==1)
										{
										printf("Entrer le nouveau l'age :");
										fgets(a0[index].age, sizeof(a0[index].age),stdin);
										printf("L'age est modifier avec succes\n");
										}
										else
										{
										printf("L'age introuvable");
										}
										break;
										default :
									    printf("Le choix invalide \nEntrer les choix disponibles ");
									break;
								}
                                case 4 :
                                {

                int id_Supprimer;
			    int trouve;
		        printf("Quelle est l'id de l'animal que voulez Supprimer : ");
			    scanf(" %d",&id_Supprimer);
			     for(int i = 0; i < index; i++)
				 {
                      if (a0[i].id == id_Supprimer)
					  {
                      trouve = 1;
                      for (int j = i; j < index - 1; j++)
					  {
                       a0[j] = a0[j + 1];
                      }
                       index--;
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
                     break;
               break;
		case 5 :
			    printf(" ====> Rechercher un animal <====")
			    printf("1.  Rechercher par id 2.  Rechercher par nom 3.  Rechercher par espece\n")
			    printf("Choisir la methode par rechercher(1-3) :  ");
			    scantf("%d",&choix);
                getchar();
                switch(choix)
					   {
					   	case 1 :
					   		    int i=0;
                                int idTrouve=0;
                                printf("Entrer l'id de l'animal qui va rechercher : ");
                                scanf(" %d",id_rechercher);
                                 while(i<index)
								 {
								if(strcmp(a0[i].id,id_rechercher)==0)
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
					   	break;
					   	case 2 :
						   int i=0;
                           int nom_Trouve=0;
						   printf("Entrer le nom de l'animal qui va rechercher : ");
                           scanf(" %s",nom_rechercher);
						   while(i<index)
						   {
						   if(strcmp(a0[i].nom,nom_rechercher)==0)
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
					   		break;
					   	case 3 :
						   int i=0;
                           int espece_Trouve=0;
						   printf("Entrer l'espece de l'animal qui va rechercher : ");
                           scanf(" %s",id_rechercher);
						   while(i<index)
						   {
						   if(strcmp(a0[i].espece,id_rechercher)==0)
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
							break;
							default :
							printf("Le choix invalide \nEntrer les choix disponibles ");
						    case 6 :
							int S = 0;
							for(int i=0;i<20;i++){
							S +=  a0[i].id;
							}
							printf("Nombre total d'animaux dans le zoo est : %d",S);
							float M = S / 20 ;
							printf("Age moyen des animaux est : %.2f",M);
							 Max = a0[0].age;
							 for (int i = 1; i < 20; i++)
							 {
							 if (a0[i].age > Max)
							 {
							 Max = a0[i].age;
							 }
							 }
							 Min = a0[0].age;
							 for (int i = 1; i < 20; i++)
							 {
							 if (a0[i].age < Min)
							 {
							 Min = a0[i].age;
							 }
							 }
							printf("Plus vieux est %s et plus jeune animal est %s",Max,Min);

							printf("Les especes les plus representees est : %s ",);





        	    break;
        case 0 :
                printf("Au revoir");
                break;
        default :
         printf("Le choix invalide \nEntrer les choix disponibles ");
        }

  }while(choix != 7);
  return 0;
}
