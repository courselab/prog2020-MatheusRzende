/* m007.c - Number of letters.

   This program reads the name of a person from the standard input
   and outputs the number of letters contained in the name (excluding
   blanks and punctuation). The name should be entered using only
   ASCII characters (26 letter of latim alphabet, no diacrictics).


   E.g.

      command line    : m007
      standard input  : John Doe
      expected output : 7

   Directions:

      Please, edit function lettercount();
      do no not change function main().

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 256




/* Count the number of letters in string s.*/


 int lettercount (char *s)
{
 int i, x;
 int value; 
 /*
 value = 0; 

 while(s[i] != 0)
  {
 if  (s[i] != ' ')
   
   value = value + 1;
   
   i++;
  }
    return value;
}
 */

 
 
 
 
 
 
 
 
 
 

 
 
value = 0;

  x = strlen(s);
  
  for(i=0; i <= x-2 ; i++)
  {
   if (s[i] != ' ')
   
   value = value + 1;
     
  
  }
  return value;
}



/* Do not edit this function. */

int main (int argc, char **argv)
{
  int n;
  char name[MAX];

  fgets (name, MAX-1, stdin);
  
  n = lettercount (name);

  printf ("%d\n", n);
  
  return 0;
}
