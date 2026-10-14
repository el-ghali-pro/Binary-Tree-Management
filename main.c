#include <stdio.h>
#include <stdlib.h>
#include "arbre.h"

// afficher l'objet
char* afficher (Objet* objet){
  return (char*)objet;
}

int menu (){
 int choix;
 printf("\n-----------------------------------------------------------");
 printf("\n\n\t****** GESTION D'ARBRES ******\n\n");
 printf("\t0- Fin du programme\n");
 printf("\t1- Creation de l'arbre genealogique\n");
 printf("\t2- Creation de l'arbre de l'expression arithmetique\n");
 printf("\t3- Parcours prefixe\n");
 printf("\t4- Parcours infixe\n");
 printf("\t5- Parcours postfixe");
 printf("\n-----------------------------------------------------------\n");
 printf("\n");
 printf("\n\tVeuillez entrer votre choix: ");
 scanf("%d",&choix);
 return choix;
 printf("\n");
 printf("\n-----------------------------------------------------------\n");
}
int main() {
 int fini=0;
 Arbre* arbre1;
 Arbre* arbre2;
 Noeud* n1,n2;
 Objet* N1;
 while(!fini){
  switch (menu ()){
   case 0:
    fini=1;
   break;
   case 1:
   arbre1=creerArbreGene ();
   break;
   case 2:
   arbre2=creerArbreArithmetique();
   break;
   case 3:{
    int c;
    printf("\tSi vous voulez parcourir l'arbre genealogique tapez 1 sinon tapez 2 :");
    scanf("%d",&c);
    switch (c){
     case 1 :
     prefixe(arbre1->racine, afficher);
     break;
     case 2 :
     prefixe(arbre2->racine, afficher);
     break;
    }
   }
   break;
   case 4:{
    int c;
    printf("\tSi vous voulez parcourir l'arbre genealogique tapez 1 sinon tapez 2 :");
    scanf("%d",&c);
    switch (c){
     case 1 :
      infixe(arbre1->racine, afficher);
     break;
     case 2 :
      infixe(arbre2->racine, afficher);
     break;
    }
   }
   break;
   case 5:{
    int c;
    printf("\tSi vous voulez parcourir l'arbre genealogique tapez 1 sinon tapez 2 :");
    scanf("%d",&c);
    switch (c){
     case 1 :
      postfixe(arbre1->racine, afficher);
     break;
     case 2 :
      postfixe(arbre2->racine, afficher);
     break;
    }
   }
   break;
  }
 }
}
