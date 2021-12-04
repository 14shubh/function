#include <stdio.h>
// Addition code.....
int add(int x,int y){
    int z;
    z = x + y;

    // return value to main...
    return z;
}

// Main function code.....
int main(){
    int a,b;
    printf("Enter two number : ");
    scanf("%d%d",&a,&b);

    // print return value...k
    printf("Total Sum of two number %d and %d is %d",a,b,add(a,b));
}