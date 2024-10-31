#include "main.h"

/**
 *puts_half- half of a ---ing
 *@str:yes
 *description: write only a half of a string
 */

void puts_half(char *str)

{
  int i = 0;
  
while (str[i] != '\0')
  {
    i++
  }
 if (i % 2 == 0)
     {
       i = i /2;
       _putchar(str[i]);
     }
 else
   {
     i = i-1 /2;
     _putchar(str[i]);
   }
}

 
//faire une integration qui calcule la length du string//
//a la fin diviser le resultat de la length et si impair utiliser > n = (length_of_the_string - 1) / 2 //
