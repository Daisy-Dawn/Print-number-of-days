#include <stdio.h>
#include <stdlib.h>

//write a program that inputs month number and print the number of days in that month

int main(void) 
{
int month;
  printf("Welcome user, please enter the month number of the year:\t");
  scanf("%d", &month);
  system("clear");

  if (month == 1|| month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
    printf ("The number of days is 31 days\n", month);

  else if (month == 4 || month == 6 || month == 9 || month == 11)
    printf ("The number of days is 30 days\n", month);

   else if (month == 2)
    printf ("The number of days of 28/29 days\n", month);

  else 
     printf("Invalid input\n");
  
  printf("\nEnd of program\n\n");
  sleep (5);
  system("clear");
  printf("Welcome user,");
  
  return 0;
}