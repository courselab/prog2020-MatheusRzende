/* m010.c - Day of the week.

   This program takes two integers read as command line arguments
   representing, respectively, the day and the month of a date in
   year 2020, and produces as output the corresponding day of the week.
   Output should be: Sunday, Monday, Thursday, Wednesday, Thursday,
   Friday, Saturday.

   E.g.

      command line    : m010 2 6
      expected output : Thursdays

   Directions:

      Please, edit function day_of_week();
      do no not change function main().

 */

#include <stdio.h>
#include <stdlib.h>

#define USAGE "m010 <day> <month>\n"

enum {sun, mon, tue, wed, thu, fri, sat};

/* Return the day of the week in the numeric form:
   Sunday=0, Monday=1... Saturday=6.*/

int day_of_week (int day, int month)
{
  int n, i=0;
  int v[12];
  int x;
  
  n=0;

  v[0]=31;  v[1]=29;  v[2]=31;  v[3]=30;  v[4]=31;  v[5]= 30;
  v[6]=31;  v[7]=31;  v[8]=30;  v[9]=31;  v[10]=30; v[11]=31;
  
  while(i<month-1)
  {
    {
     n += v[i]; 
    }
   i++;
  }
  
  x = day + n;
 
 switch(x%7)
 {
   case 0:
    return tue;
    break;
   case 1:
     return wed;
     break;
   case 2:
     return thu;
     break;
   case 3:
     return fri;
     break;
   case 4:
     return sat;
     break;
   case 5:
     return sun;
     break;
   case 6:
     return mon;
     break;
   default:
   return 0;
   break;
 }
}

  /*Tambem tentei fazer assim, mas o autograding nao aceitou nenhum 

  for(i=0; i<month; i++) 
  {
   n = v[i] + n ;     
  }
   
  x = day + n;*/

 /* 
  if (x%7 == 0) 
  return tue;

  if (x%7 == 1) 
  return wed;

  if (x%7 == 2) 
  return thu;

  if (x%7 == 3) 
  return fri;

  if (x%7 == 4) 
  return sat;

  if (x%7 == 5) 
  return sun;

  if (x%7 == 6) 
  return mon; /*
}

/* Do not edit function main. */

int main (int argc, char **argv)
{
  int day, month, dweek;
  int g;

  if (argc < 3)
    {
      printf (USAGE);
      exit(1);
    }
  
  day = atoi(argv[1]);
  month = atoi(argv[2]);

  dweek = day_of_week (day, month);
  
  switch (dweek)
    {
    case sun:
      printf ("Sunday\n");
      break;
    case mon:
      printf ("Monday\n");
      break;
    case tue:
      printf ("Tuesday\n");
      break;
    case wed:
      printf ("Wednesday\n");
      break;
    case thu:
      printf ("Thursday\n");
      break;
    case fri:
      printf ("Friday\n");
      break;
    case sat:
      printf ("Saturday\n");
      break;
    default:
      printf ("Something wrong\n");
      break;
    }
  
  return 0;
}
