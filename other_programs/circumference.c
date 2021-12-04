#include <stdio.h>
float circum(float r){
    float circum;
    circum = 2*3.14f*r; 
    return (circum);
}
int main () {
    float r;
    printf("Enter radius : ");
    scanf("%f",&r);
    printf("Circumference of circle is : %f ",circum(r));
   return 0;
}