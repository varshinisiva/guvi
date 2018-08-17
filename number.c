#include <stdio.h>
#include <conio.h>
int main ()
{
 int number;
 printf ("\n Enter the number:");
 scanf ("%d",&number);
 if (number>0)
  printf ("\n Positive");
 else if (number<0)
  printf ("\n Negative");
 else
  printf ("\n Zero");
 getch ();
}
