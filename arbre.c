#include "arbre.h"
Noeud* cNd (Objet* objet, Noeud* gauche, Noeud* droite)
{
Noeud* nouveau=(Noeud*)malloc(sizeof(Noeud));
nouveau->reference = objet;
nouveau->gauche = gauche;
nouveau->droite = droite;
return nouveau;
}
Noeud* cF (Objet* objet)
{
return cNd (objet, NULL, NULL);
}
void initArbre (Arbre* arbre, Noeud* racine,char* (*afficher)(Objet*),int(*comparer)(Objet*,Objet*))
{
arbre->racine = racine;
arbre->afficher = afficher;
arbre->comparer = comparer;
}
Arbre* creerArbre (Noeud* racine, char* (*afficher)(Objet*),int (*comparer)(Objet*,Objet*))
{
Arbre* arbre = (Arbre*)malloc(sizeof(Arbre));
initArbre(arbre,racine,afficher,comparer);
return arbre;
}
void prefixe (Noeud* racine, char* (*afficher) (Objet*))
{
if (racine != NULL)
{
printf("%s", afficher(racine->reference));
prefixe(racine->gauche, afficher);
prefixe(racine->droite, afficher);
}
}
void infixe (Noeud* racine, char* (*afficher) (Objet*))
{
if (racine != NULL)
{
infixe(racine->gauche, afficher);
printf("%s",afficher (racine->reference));
infixe(racine->droite, afficher);
}
}
void postfixe (Noeud* racine,char* (*afficher) (Objet*))
{
if (racine != NULL)
{
postfixe (racine->gauche, afficher);
postfixe (racine->droite,afficher);
printf("%s",afficher (racine->reference));
}
}
Arbre* creerArbreGene()
{
Noeud* racine = cNd ((char*)"Samir ", cNd ((char*)"Kamal ", cNd
((char*)"Yassine ",
 NULL, cNd ((char*)"Hind ", NULL, cF ((char*)"Yasmine "))), cNd
((char*)"Sarah ",cF((char*)"Karim "),NULL)), NULL );
return creerArbre(racine,NULL,NULL);
}
Arbre* creerArbreArithmetique()
{
 Noeud* racine = cNd((char*)"-", cNd((char*)"*",
cNd((char*)"+",cF((char*)"a"),
cF((char*)"b")),cNd((char*)"-",cF((char*)"c"),cF((char*)"d"))), cF((char*)"e"));
 return creerArbre(racine,NULL,NULL);
}
