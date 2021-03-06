#include <stdlib.h>
#include "pagetable.h"

/********************* initializeTable ************************
int** initializeTable(int*** table, int size)
parameters:
        int*** table
        int size
manage the page table for the process. 
**************************************************************/
int** initializeTable(int*** table, int size) {
      *table = (int **)malloc(size * sizeof(int*));
      
      int x;
      for (x = 0; x < size; x++) {
         (*table)[x] = (int *)malloc(2 * sizeof(int));
         (*table)[x][0] = NONE;
         (*table)[x][1] = i;
      }
      
      return *table;
}

/********************** pointPage *******************************
int** pointPage(int*** table, int virtpage, int physframe)
parameters
        int*** table
        int virtpage
        int physframe
****************************************************************/
int** pointPage(int*** table, int virtpage, int physframe) {
      (*table)[virtpage][0] = physframe;
      (*table)[virtpage][1] = v;
      
      return *table;
}
/*********************** freeTable  *****************************
void freeTable(int*** table, int size) 
parameters
        int*** table
        int size
****************************************************************/
void freeTable(int*** table, int size) {
   int x;
   for (x = 0; x < size; x++)
      free((*table)[x]);
   
   free(*table);
}
