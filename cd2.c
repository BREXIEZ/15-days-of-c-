#include <stdio.h>
int main()
{
  int number, wish, n;
  wish = 3, n = 1;
  printf("Magic 5 ball\n");
  printf("You Have 3 spins\n");
  while(wish >= n)
  {
    printf("Enter a number (range 0 - 5) : ");
    scanf("%d",&number);
    switch(number)
  {
    case 0:
      printf("Good\n");
      break;
    case 1:
       printf("Get a girlfriend\n");
       break;
    case 2:
      printf("Get a hobby\n");
      break;
    case 3:
      printf("Send Nudes :P\n ");
      break;
    case 4:
      printf("Learn a skill\n");
      break;
    case 5:
      printf("Do the 15 days Challenge\n");
      break;
    default:
      printf("Out of range. Get your head right nigga\n");
      break;
      }
      n++;
  }
  return 0;
}