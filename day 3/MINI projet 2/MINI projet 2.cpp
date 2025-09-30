#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char nom_rechercher[100];
int index = 0;
struct contact{
	char nom[100];
    char adresse[100];  
    char  numero[11];
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
void supp_newline(char str[]) {
    int len = strlen(str);
    if(len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }
}

  int verifier_email(char email[]){
  int kayna_aro = 0,j;
  for(int i = 0;i < structlen(email);i++){
    if(email[i] == '@'){
      kayna_aro++;
      j = i + 1;
    }
    }
    j++;
  }
  if(kayna_aro != 1 ){
  	printf("invalide");
    return -1;
  }
  return 0;
}
int verufie_num(char numero[]){
  int len = strlen(numero);
  if(len != 9){
    return -1;
  }
  return 0;
}
void ajouterContact(struct contact c1[])
{
	           char name[50], phone[50], email[50];
               printf("Entrer le nom : ");
               fgets(c1[index].nom, sizeof(c1[index].nom),stdin);
               remove_new_line_lowercase(name);
               printf("Entrer le numero de telephone : ");
               fgets(c1[index].numero, sizeof(c1[index].numero),stdin);
               
               printf("Entrer l'adresse email : ");
               fgets(c1[index].adresse, sizeof(c1[index].adresse),stdin);
               
               printf("Contact ajoute avec succes\n");
               index++;
}
void modifierContact(struct contact c1[])
{
           int ContactTrouve=0;
            int i=0;
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
                fgets(c1[index].nom, sizeof(c1[index].nom),stdin);
                printf("Entrer le nouveau numero:");
                fgets(c1[index].numero, sizeof(c1[index].numero),stdin);
                printf("Entrer le nouveau adress:");
                fgets(c1[index].adresse, sizeof(c1[index].adresse),stdin);
                printf("Le contact est modifier avec succes\n");
            }
            else
            {
                printf("Nom introuvable");
            }     	
}
void rechercherContact(struct contact c1[])
{
               int i=0;
               int ContactTrouve=0;
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
}
void supprimerContact(struct contact c1[])
{
	        int ContactTrouve=0;
            int i=0;
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
}
void affichiertousContact(struct contact c1[])
{
               int i=0;
               printf("Tous les Contacts est : \n");
               while(i<index)
               {
                   printf("==> Le contact %d",i+1);
                   printf("\n     Le nom est : %s ",c1[i].nom);
                   printf("    Le numero de telephone est : %s ",c1[i].numero);
                   printf("    L'adresse email est : %s ",c1[i].adresse);
                   i++;
               }	
}
int main(){            
    int choix;
	struct contact c1[100] ;
	int i=0;
    int ContactTrouve;
    char nom_rechercher[100];
    do{
        printf("\n====MENU ====\n");
        printf("1. Ajouter un Contact\n");
        printf("2. Modifier un Contact\n");                                 
        printf("3. Supprimer un Contact\n");
		printf("4. Afficher Tous les Contacts\n");                                           
        printf("5. Rechercher un Contact\n");
        printf("6. Quitter\n");
        printf("Votre choix : ");
        scanf("%d", &choix);
        getchar();
        switch(choix){
        case 1 :
               ajouterContact(c1);
               break;
        case 2 :
               modifierContact(c1);
               break;           
        case 3 :
               supprimerContact(c1);
			   break;
        case 4 : 
               affichiertousContact(c1);
               break;
		case 5 :
                rechercherContact(c1);
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
