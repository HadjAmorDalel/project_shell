#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void tri_decroissant(char *tab[], int numb_rep)
 {
   char *aux_ch; 
   int i, j;

   for (i = 0; i < numb_rep; i++) 
    for (j = 0; j < numb_rep; j++)
      if (strcmp(tab[i], tab[j]) > 0)
        {
          aux_ch = tab[i];
          tab[i] = tab[j];
          tab[j] = aux_ch;
        }
  }


void tri_croissant(char *tab[], int numb_rep)
 {
   char *aux_ch; 
   int i, j;

   for (i = 0; i < numb_rep; i++) 
    for (j = 0; j < numb_rep; j++)
      if (strcmp(tab[i], tab[j]) < 0)
        {
          aux_ch = tab[i];
          tab[i] = tab[j];
          tab[j] = aux_ch;
        }
  }

