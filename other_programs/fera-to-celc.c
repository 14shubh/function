#include <stdio.h>
// Converting temperature Celsius to Fahrenheit.....
float temperature(float temp){
    float fahr;
    // Calculate Celsius.....
    fahr = (temp * 9/5) +32;
    return fahr;
}

int main(){
    float cels,result;
    //Enter temperature in Celsius.....
    printf("Please enter temperature in Celsius : ");
    scanf("%f",&cels);
    result = temperature(cels);// fahr
    printf("fahernite %f",result); // print the temperature in Fahrenheit 
     
    return 0;
}