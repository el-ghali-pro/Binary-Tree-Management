#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
typedef void Objet;
typedef int Booleen;
typedef struct noeud {
Objet* reference;
struct noeud* gauche;
struct noeud* droite;
} Noeud;
typedef struct {
Noeud* racine;
char* (*afficher) (Objet*);
int (*comparer) (Objet*,Objet*);
} Arbre;
Noeud* cNd (Objet* objet, Noeud* gauche, Noeud* droite);
Noeud* cF (Objet* objet);
void initArbre (Arbre* arbre, Noeud* racine,char* (*afficher)(Objet*),int(*comparer)(Objet*,Objet*));
Arbre* creerArbre (Noeud* racine, char* (*afficher)(Objet*),int (*comparer)(Objet*,Objet*));
void prefixe (Noeud* racine, char* (*afficher) (Objet*));
void infixe (Noeud* racine, char* (*afficher) (Objet*));
void postfixe (Noeud* racine,char* (*afficher) (Objet*));
Arbre* creerArbreGene ();
Arbre* creerArbreArithmetique();


