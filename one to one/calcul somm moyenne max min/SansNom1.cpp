#include <stdio.h>
 int main(){
   float ta[10];
   float Max , Min  ;
   float moyenne , s = 0 ; 
   int i;
    for(i = 0 ; i < 10 ; i++)
   {
        printf("Veuillez entrer l'element %d positif : ",i+1);
       scanf("%f",&ta[i]);
   }
   for(int i = 0; i<10;i++)
   {
           s = s + ta[i];
    }
        moyenne = s / 10 ;
     
       printf("La somme des elements est : %.2f \n",s);
       printf("La moyenne des elements est : %.2f \n", moyenne);
       Max = ta[0];
     for(i=0;i<10;i++)
     {
         if(ta[i]>Max)
   {
     Max = ta[i];
   }
     }
        printf("Le maximum des elements est : %.2f \n",Max);
        Min = ta[0];
     for(i=0;i<10;i++)
     {
         if(ta[i]<Min)
     {
     Min = ta[i];
     }
     }
        printf("Le minimum des elements est : %.2f \n",Min);

    return 0;
}

