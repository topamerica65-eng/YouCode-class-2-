#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct contact{
	char nom[100];
    char adresse[100];  
    char  numero[100];
};

void my_strcpy(char dst[], const char src[])
{
    int i=0;
    while(src[i]!='\0')
    {
        dst[i]=src[i];
        i++;
    }
    dst[i]='\0';
}
int main(){            
    int choix;
    int index = 0;
	struct contact c1[100] ;
	int i=0;
    int ContactTrouve;
    char nom_rechercher[100];
    do{
        printf("\n====MENU ====\n");
        printf("1. Ajouter un Contact\n");
        printf("2. Modifier un Contact\n");                                 
        printf("3. Supprimer un Contact\n");                                           printf("4. Afficher Tous les Contacts\n");
        printf("5. Rechercher un Contact\n");
        printf("6. Quitter\n");
        printf("Votre choix : ");
        scanf("%d", &choix);
        getchar();
        switch(choix){
        case 1 :
               printf("Entrer le nom : ");
               scanf(" %s",c1[index].nom);
               printf("Entrer le numero de telephone : ");
               scanf(" %s",c1[index].numero);
               printf("Entrer l'adresse email : ");
               scanf(" %s",c1[index].adresse);
               while(getchar()=='\n');
               printf("Contact ajoute avec succes\n");
               index++;
               break;
        case 2 :
            ContactTrouve=0;
            i=0;
            printf("Entrer le nom que vous voulez modifier : ");
            scanf(" %s",nom_rechercher);
            while(i<index)
            {
                if(strcmp(c1[i].nom,nom_rechercher)==0)
                {
                    ContactTrouve = 1;
                    break;
			    }
                i++;
            }
            if(ContactTrouve==1)
            {
                printf("Entrer le nouveau nom:");
                scanf(" %s",c1[i].nom);
                printf("Entrer le nouveau numero:");
                scanf(" %s",c1[i].numero);
                printf("Entrer le nouveau adress:");
                scanf(" %s",c1[i].adresse);
                printf("Le contact est modifier avec succes\n");
            }
            else
            {
                printf("Nom introuvable");
            }     
            break;           
        case 3 :
            ContactTrouve=0;
            i=0;
			printf("Quelle est le nom que voulez Supprimer : ");
			scanf(" %s",nom_rechercher);
            while(i<index)
            {
			    if(strcmp(c1[i].nom,nom_rechercher)==0)
                {
			        ContactTrouve = 1;
                    break;	
                }
                i++;
			}
            if(ContactTrouve==1)
            {
                while(i<index-1)
                    {
                        my_strcpy(c1[i].nom,c1[i+1].nom);
                        my_strcpy(c1[i].numero,c1[i+1].numero);
                        my_strcpy(c1[i].adresse,c1[i+1].adresse);
                        i++;
                    }
                index--;
                printf("Contact supprime avec succes");
            } 
            else
            {
                printf("Le contact n'est pas disponible ");
            }
			   break;
        case 4 : 
               i=0;
               printf("Tous les Contacts est : \n");
               while(i<index)
               {
                   printf("==Le contact %d\n",i+1);
                   printf("Le nom est : %s \n",c1[i].nom);
                   printf("Le numero de telephone est : %s \n",c1[i].numero);
                   printf("L'adresse email est : %s \n",c1[i].adresse);
                   i++;
               }
               break;
		case 5 :
               i=0;
               ContactTrouve=0;
               printf("Entrer le nom de cantact qui va rechercher : ");
               scanf(" %s",nom_rechercher);
               while(i<index)
               {
                   if(strcmp(c1[i].nom,nom_rechercher)==0)
                   {
                       printf("Le nom est disponible\n");
                       ContactTrouve = 1;
                       break;
                   }
                   i++;
               }
               if(ContactTrouve==1)
               {
                   printf("Nom : %s\n",c1[i].nom);
                   printf("Numero : %s\n",c1[i].numero);
                   printf("Adresse : %s\n",c1[i].adresse);
                   i++;
               }
               if(ContactTrouve==0){
               	printf("Le nom n'est pas disponible");
			   }
                break;
         case 6 :
                printf("Au revoir");
                break;
        default :
         printf("Le choix invalide \nEntrer les choix disponibles ");
        }       
               
    }while(choix != 6);

  return 0;
}
