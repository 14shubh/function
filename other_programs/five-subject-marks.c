// •	Percentage of 5 Subjects
#include <stdio.h>
void pre(int Phy, int Bio, int Che, int Math, int Comp)
{
    int percentage;
    percentage = (Phy + Che + Bio + Math + Comp) / 5;
    printf("%.2f Percentage :- ", percentage);
    if (percentage >= 90)
    {
        printf("pass with Grade A");
    }
    else if ((percentage >= 80) && (percentage <= 89))
    {
        printf("pass with Grade B");
    }
    else if ((percentage >= 70) && (percentage <= 79))
    {
        printf("pass with Grade C");
    }
    else if ((percentage >= 60) && (percentage <= 69))
    {
        printf("pass with Grade D");
    }
    else if ((percentage >= 40) && (percentage <= 59))
    {
        printf("pass with Grade E");
    }
    else
    {
        printf(" Grade F");
    }
}
int main()
{
    float Phy, Che, Bio, Math, Comp;
    printf("Enter your marks :");
    printf("Physics :\n");
    scanf("%f", &Phy);
    printf("Chemistry :\n");
    scanf("%f", &Che);
    printf("Biology :\n");
    scanf("%f", &Bio);
    printf("Mathematics :\n");
    scanf("%f", &Math);
    printf("Computer :\n");
    scanf("%f", &Comp);

    per(Phy, Che, Bio, Math, Comp);
    return 0;
}