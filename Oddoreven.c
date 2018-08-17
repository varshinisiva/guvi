#include <stdio.h>
#include <conio.h>
int main ()
{
 int number;
 printf ("\n Enter the number:");
 scanf ("%d",&number);
 if (number>=0)
   if (number%2==0)
     printf ("\n Even number");
   else
     printf ("\n Odd number");
 else
  printf ("\n Invalid format");
 getch ();
 }
