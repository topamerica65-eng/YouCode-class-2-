#include <stdio.h>

float ta[10];
float Max, Min;
float moyenne, s;
int i;


void complettab() {
   for (int i = 0; i < 10; i++) 
   {
      printf("Veuillez entrer l'element %d positif : ", i + 1);
      scanf("%f", &ta[i]);
   }
}


void calculsomme() {
   s = 0;
   for (int i = 0; i < 10; i++) 
   {
      s = s + ta[i];
   }
   printf("La somme des elements est : %.2f\n", s);
}


void calculmoyenne() {
   s = 0;
   for (int i = 0; i < 10; i++) 
   {
      s = s + ta[i];
   }
   moyenne = s / 10;
   printf("La moyenne des elements est : %.2f\n", moyenne);
}


void calculmax() {
   Max = ta[0];
   for (int i = 0; i < 10; i++) 
   {
      if (ta[i] > Max) 
      {
         Max = ta[i];
      }
   }
   printf("Le maximum des elements est : %.2f\n", Max);
}

void calculmin() {
   Min = ta[0];
   for (int i = 0; i < 10; i++) 
   {
      if (ta[i] < Min) 
      {
         Min = ta[i];
      }
   }
   printf("Le minimum des elements est : %.2f\n", Min);
}

int main() {
   complettab();
   calculsomme();
   calculmoyenne();
   calculmax();
   calculmin();
   return 0;
}
