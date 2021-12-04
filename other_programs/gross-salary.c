#include <stdio.h>
GrossSalary(int basesalary){
    float hra, ta, da, grossSalary;
    if (basesalary > 10000)
    {
        hra = (basesalary*10)/100.0f;
        ta = (basesalary*5)/100.0f;
        da = (basesalary*3)/100.0f;
    }
   else
   {
       hra = (basesalary*5)/100.0f;
       ta = (basesalary*5)/100.0f;
   }
   grossSalary = basesalary + hra + ta + da;
   printf("basic Salary : %u \n",basesalary);
   printf("hra : %f \n",hra);
   printf("ta : %f \n",ta);
   printf("da : %f \n",da);
   printf("gross salary %.2f \n",grossSalary);

}
int main(){
    unsigned int basesalary;
    printf("Enter Salary ");
    scanf("%u",&basesalary);
    GrossSalary(basesalary);
    return 0;
}