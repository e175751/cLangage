#include<stdio.h>

int main(){
  double radius = 10;
  double pi = 3.1415926;
  double circumference;
  double area;

  circumference = radius * 2 * pi;
  area = radius * radius * pi;

  printf("半径 = %f\n", radius);
  printf("円周 = %f\n", circumference);
  printf("面積 = %f\n", area);
}
