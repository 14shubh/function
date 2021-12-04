#include <stdio.h>

// Subtraction code...
int sub(int x, int y){
    int z;
    z=x-y;

    // value return to main...
    return (z);

}

// Main function code....
int main () {
    int a,b;
    printf("Enter two number : ");
    scanf("%d%d",&a,&b);
    printf("Subtraction of two number %d and %d is %d ",a,b,sub(a,b));
   return 0;
}




