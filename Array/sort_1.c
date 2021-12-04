// •	Sort A Float Array In Ascending And Descending Order Using

#include <stdio.h>

void sort(int num){
    int a[100],temp,temp1;
    for(int i=0;i<num;i++)
    {
        scanf("%d",&a[i]) ;
    }
    // loop for sorting array in ascending order

    for(int i=0;i<num;i++)  
        {
        for(int j=i+1;j<num;j++) { if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("Ascending order of an array : \n");  //print ascending order
    for(int i=0;i<num;i++)
    {
        printf("%d ",a[i]) ;
    }
    
// loop for sorting array in descending order
    for(int p=0;p<num;p++) 

    {
        for(int q=p+1;q<num;q++)
        {
            if(a[p]<a[q])
            {
                temp1=a[p];
                a[p]=a[q];
                a[q]=temp1;
            }
        }
    }
    printf("\n Descending order of an array : \n");  // print descending order
    for(int p=0;p<num;p++)
    {
        printf("%d ",a[p]) ;
    }
}
int main()
{
    int num;
    printf("Enter the size of array : \n") ; 
    scanf("%d",&num) ;
    printf("Enter the elements : \n") ; 
    sort(num);
    return 0;
}