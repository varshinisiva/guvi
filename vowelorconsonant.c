#include <stdio.h>
#include <conio.h>
char main ()
{
 char ch;
 printf ("\n Enter the alphabet:");
 scanf ("%c",&ch);
 if(((ch>='a')&&(ch<='z'))||((ch>='A')&&(ch <='Z')))
   if ((ch=='a')||(ch=='e')||(ch=='i')||(ch=='o')||(ch=='u')||(ch=='A')||(ch=='E')||(ch=='I')||(ch=='O')||(ch=='U'))
     printf ("\n Vowel");
   else
     printf ("\n Consonant");
else
  printf ("Invalid format");
getch ();
 }
