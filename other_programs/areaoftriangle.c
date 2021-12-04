// •	Area of Triangle

#include <stdio.h>

float AreaofTriangle(float base, float height){
    float area;
    area = (base*height)/2;
    return area;
}
int main () {
    float base,height,area;
    printf("Enter base : ");
    scanf("%f",&base);
    printf("Enter height : ");
    scanf("%f",&height);
    printf("Area of triangle is :%f",AreaofTriangle(base,height));
   return 0;
}