#include <stdio.h>
#include <stdlib.h>

/* Version d'Echo sans interpretation a la lecture.

   On lit un ensemble de caracteres formant une chaine.
   Cet ensemble est delimite par une taille MAX et la présence 
   eventuelle d'un caractere newline.

   Cette chaine n'est pas interpretee : ce qui veut dire qu'on ne sait
   pas si cette chaine represente un entier ou n'importe quoi d'autre.

   On ecrit cette meme chaine sur le fichier std de sortie.
*/

int main (void){
  char buf[256]; /* Limiting buf size is THE GOOD policy */
  while (fgets(buf, sizeof(buf), stdin) != NULL) {
    /* man fgets => If a newline is read, it is stored into 
       the buffer
       ! */
#if 0
    /* Montrer comment interpreter la chaine de caractere lue */
    int v;
    v = atoi(buf);     /* String is converted to int */
    printf("%d\n",v);
#endif

    fputs(buf,stdout); /* Newline is already in string buf */
  }
  /* Exit on Error or EOF */
  
  return EXIT_SUCCESS;
}