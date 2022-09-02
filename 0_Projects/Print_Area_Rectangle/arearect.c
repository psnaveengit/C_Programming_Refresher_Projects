/* Project Assignment;

WAP to display the perimeter & area of rectangle

Requirements:
1. Create 4 Variables of type double to store
width, length, perimeter and area

2. Display all 4 in correct format using 1 print statement

My Research

Perimeter of a rectangle - P=2(l+w)
Area of a rectangle - A=lw

*/

#include<stdio.h>

int main()
{
  double l;
  double w;
  double p;
  double a;

  printf("\nPerimeter & Area Calculator for Rectangle\n");
  printf("-----------------------------------------\n");

  printf("Enter the length of Rectangle in centimeters: ");
  scanf("%lf", &l);
  printf("\nLength: %lf centimeters\n", l);

  printf("\nEnter the width of Rectangle in centimeters: ");
  scanf("%lf", &w);
  printf("\nWidth: %lf centimeters\n", w);

  p = 2*(l+w);
  a = l*w;
  printf ("\nL:%lf W:%lf P:%lf A:%lf\n", l,w,p,a);
  printf("-----------------------------------------\n");
  return 0;
}
