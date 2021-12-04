// •	Area of a Circle

#include <stdio.h>

float areaofcircle(int radius){
    float result=0;
    result = 3.14*radius*radius;
    return result;
}
int main(){
  float radius;
  printf("Enter radius :\n");
  scanf("%f",&radius);
  printf("area of circle is : %.2f",areaofcircle(radius));
  return 0;
}