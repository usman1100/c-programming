#include <stdio.h>

int length = 0;

void insert(int n, int **start)
{
   if(length != 0)
      *start++;

   **start = n;
   *start ++;
   length ++;
   
}



void printlist(int **start)
{
   *start -= length;

   for (int i = 0; i < length; ++i)
   {
      printf("%d ", **start);
      *start ++;
   }

   *start -= length;
}

int main()
{
   int *start = NULL;
   for (int i = 0; i < 5; ++i)
   {
      insert(i+1, &start);
   }

   printlist(&start);




}