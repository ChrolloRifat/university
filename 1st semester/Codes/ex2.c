/**
 *C program to display all the letters of
 * the alphabet using for loop
 */
#include <stdio.h>
int main()
{
     int i;
     char ch = 'A';
     char ch2 = 'a';

     printf("Capital Letters:\n\n");

     for (i = 1; i <= 26; i++)
     {
          printf("%c ", ch);
          ch = ch + 1;
     }

     printf("\n\nSmall letters:\n\n");

     for (i = 1; i <= 26; i++)
     {
          printf("%c ", ch2);
          ch2 = ch2 + 1;
     }
     printf("\n");
     return 0;
}
