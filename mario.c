#include <cs50.h>
#include <stdio.h>

int main(void)
{
int n = get_int("Height: ");
if (n < 1 || n > 8)
     do
     {
          n = get_int("Height: ");
     }
     while (n < 1 || n > 8);

int p = n-(n-1);
int j = p;
int spaces = n-1;
int s = spaces;


for (int i = 0; i < n; i++ )
     {
          while (spaces > 0)
          {
               printf(" ");
               spaces--;
          }
          s--;
          spaces = s;

          while (j > 0)

          {
               printf("#");
               j--;
          }

     j = p;
     printf("  ");
          while  (j > 0)
          {
               printf("#");
               j--;
          }
     printf("\n");
     p++;
     j = p;
     }



}


