// •	Find A Generic Root Of Number
#include <stdio.h> 

int root(int num){
 int temp, rem, sum = 0;
 temp = num;  
  
    do  
    {  
        rem  = temp % 10;  
        sum  = sum + rem;  
        temp = temp / 10;  
  
        if(temp == 0)  
        {  
            if(sum > 9)  
            {  
                temp = sum;  
                sum  = 0;  
            }  
        }  
    }while(temp > 0);
    return sum;  
}
int main()  
{  
    int num;  
  
    printf("Enter a number\n");  
    scanf("%d", &num);  
    printf("Generic Root of %d is %d\n", num, root(num));  
  
    return 0;  
} 