/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int m1, m2, sum;
  float average;

  printf("Enter module 01 marks = ");
  scanf("%d",&m1);
  printf("Enter module 02 marks = ");
  scanf("%d",&m2);

  sum = m1 + m2;

  average = sum /2.0;

  printf("Average =  %.2f ",average);
  
  return 0;
}

