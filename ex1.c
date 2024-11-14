/******************
Name: a
ID:
Assignment: Exercise 1
*******************/
#include <stdio.h>

// REMIDER : YOU CANT USE ANY CONTROL FLOW OPERATIONS OR FUNCTIONS, ONLY BITWISE.

int main()
{

  // What bit
  printf("What bit:\n");
  /*Scan two integers (representing number and a position)
  Print the bit in this position. */

  int num, index;
  printf("Please enter a number:\n");
  scanf("%d", &num);
  printf("Please enter a position:\n");
  scanf("%d", &index);
  printf("The bit in position %d of number %d is: %d\n", index, num, (num >> index) % 2);

  // Set bit
  printf("\nSet bit:\n");
  /*Scan two integers (representing number and a position)
  Make sure the bit in this position is "on" (equal to 1)
  Print the output
  Now make sure it's "off" (equal to 0)
  Print the output */

  printf("Please enter a number:\n");
  scanf("%d", &num);
  printf("Please enter a position:\n");
  scanf("%d", &index);
  printf("Number with bit %d set to 1: %d\n", index, (1 << index) | num);
  printf("Number with bit %d set to 0: %d\n", index, ~(1 << index) & num);

  // Toggle bit
  printf("\nToggle bit:\n");
  /*Scan two integers (representing number and a position)
  Toggle the bit in this position
  Print the new number */

  printf("Please enter a number:\n");
  scanf("%d", &num);
  printf("Please enter a position:\n");
  scanf("%d", &index);
  printf("Number with bit %d toggled: %d\n", index, (1 << index) ^ num);

  // Even - Odd
  printf("\nEven - Odd:\n");
  /* Scan an integer
  If the number is even - print 1, else - print 0. */

  printf("Please enter a number:\n");
  scanf("%d", &num);
  printf("%d\n", num % 2 ^ 1);

  // 3, 5, 7, 11
  printf("\n3, 5, 7, 11:\n");
  /* Scan two integers in octal base
  sum them up and print the result in hexadecimal base
  Print only 4 bits, in positions: 3,5,7,11 in the result. */

  int num1, num2, sum;
  printf("Please enter the first number (octal):\n");
  scanf("%o", &num1);
  printf("Please enter the second number (octal):\n");
  scanf("%o", &num2);
  sum = num1 + num2;
  printf("The sum in hexadecimal: %X\n", sum);
  printf("The 3,5,7,11 bits are: %d%d%d%d\n", (sum >> 3) % 2, (sum >> 5) % 2, (sum >> 7) % 2, (sum >> 11) % 2);

  printf("Bye!\n");

  return 0;
}
