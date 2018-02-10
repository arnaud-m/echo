#include <stdio.h>
#include <stdlib.h>

/* Version d'Echo sur la base de l'utilisation des E/S de haut niveau.

   Les fonctions de haut niveau permettent d'acceder au flux/file en
   specifiant un format d'acces (determinant une regexp attendue) et
   une interpretation des caracteres qui vont etre ainsi lus.

   => par exemple, la suite de caracteres 12 (2*8 bits) devient le
   nombre (32 bits) 12 !

   * à la lecture %d suppose de lire une suite de caracteres formant
    un entier, donc une suite de nombres.

    * à l'écriture %d permet de formater le nombre représenté par
    32/64 bits en une succession de caractères numériques formant sa
    valeur decimale.
 */

int main(void) {
  int v;
  while(fscanf(stdin,"%d",&v) != EOF){
    /* a ce stade v contient un entier forme a partir des caracteres
       recupere dans le fichier*/
    
    fprintf(stdout,"%d\n",v); /* On remet le newline qui a disparu
                                 au fscanf */
  /*  Ceci n'est valide que parce que le sujet specifie qu'il y a
      un entier PAR LIGNE. */
  }
  return EXIT_SUCCESS;
}