#include<stdio.h>

int main() {
  double radius = 10;
  double pi = 3.14;
  double circumference;
  double area;

  circumference = radius * 2 * pi;
  area = radius * radius * pi;

  printf("直径 = %f\n",radius*2 );
  printf("円周 = %f\n",circumference );
  printf("面積 = %f\n",area );

  printf("直径 = %f\n",radius = 20 );
  printf("円周 = %f\n",circumference = radius*2);
  printf("面積 = %f\n",area = radius * radius * pi );
  return 0;
}
