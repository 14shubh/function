// •	Simple Interest

#include <stdio.h>

float simpleintrese(float amount, float intrese, float time){
    float result;
    result = (amount * intrese * time )/100;
    return result;
}
int main(){
    float amount,intrese,time;
    printf("Enter your Amount : ");
    scanf("%f",&amount);
    printf("Enter your Rate of Intrese :");
    scanf("%f",&intrese);
    printf("Enter your Time :");
    scanf("%f",&time);
    
    printf("intrese : %f",simpleintrese(amount,intrese,time));
    return 0;
}