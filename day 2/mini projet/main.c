#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {
    char titre[100][30];
    char auteur[100][30];  
    float prix[100];        
    int quantite[100];        
    int i, m = 0 ;    
    int choix;
    char titre_rechercher[30];
    do {
        printf("\n==== MENU ====\n");
        printf("1. Ajouter un livre\n");
        printf("2. Afficher tous les livres\n");
        printf("3. Rechercher un livre par titre\n");
        printf("4. Mettre a jour la quantite\n");
        printf("5. Supprimer un livre\n");
        printf("6. Afficher le nombre total de livres\n");
        printf("7. Quitter\n");
        printf("Votre choix : ");
        scanf("%d", &choix);
        getchar();
        switch(choix){
        case 1 :
               printf("Entrer le titre de livre : ");
               scanf("%s",&titre[m]);
               printf("Entrer l'auteur de livre : ");
               scanf("%s",&auteur[m]);
               printf("Entrer le prix de livre : ");
               scanf("%f",&prix[m]);
               printf("Entrer la quantite des livres : ");
               scanf("%d",&quantite[m]);
               m++;
        
               break;
        case 2 : 
                printf("La liste des livres est : ");
                for(i=0;i<m;i++){
                printf("Le livre %d : ",i+1);
                printf("Le titre de livre est : %s",titre[i]);
                printf("L'auteur de livre est : %s",auteur[i]);
                printf("Le prix de livre est : %f",prix[i]);
                printf("La quantite des livres est : %d",quantite[i]);
                break;
                }
        case 3 :
        	{
               int livreTrouve = 0;
               printf("Entrer le titre de livre va rechercher");
               scanf("%s",titre_rechercher);
               for(i=0;i<m;i++){
               if(strcmp(titre[i],titre_rechercher)==0){
               printf("Le livre est disponible");
               livreTrouve = 1;
               break;
               }
               if(livreTrouve != 0)
               printf("Le livre n'est pas disponible");
            }
        }
        case 4 : 
        {
            int livreTrouve = 0;
            printf ("Entrer le livre que vous voulez modifier : ");
            scanf ("%s",titre_rechercher);
            for(i=0;i<m;i++){
            if(strcmp(titre[i],titre_rechercher)==0){
            printf("Quelle est la quantite de livre : ");
            scanf("%d",quantite[i]);
            printf("La nouvelle quantite est bien modifier ");
            livreTrouve = 1;
            break;
			}
			if(livreTrouve != 0)
               printf("Le livre n'est pas modifier ");
			   break;  
			}
		}
		case 5 :
		{
			int livreTrouve = 0;
			printf("Quelle est le livre que voulez Supprimer : ");
			scanf("%s",titre_rechercher);
            for(i=0;i<m;i++)
			if(strcmp(titre[i],titre_rechercher)==0){
			livreTrouve = 1;	
            }
			if(livreTrouve != 0)
               printf("Le livre n'est pas disponible ");
			   break;  
            
            
			
			
			
			
			}	
        case 6 : 
        {
          printf("Le nombre total des livres dans le stock est : %d",m);
          break;
        }
        
        case 7 : 
        {
          printf("Au revoir");
          break;
        }  
        default :
        
         printf("Le choix invalide \nEntrer les choix disponibles ");
          
             

               
               
        }       
               
        }while(choix != 7 );

    return 0;
}
