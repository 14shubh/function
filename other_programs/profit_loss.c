// •	Calculate profit or loss.
#include <stdio.h>

void profit_loss(float Unit_Price, float Sales_Amount)
{
    float Amount;
    if (Sales_Amount > Unit_Price)
    {
        Amount = Sales_Amount - Unit_Price;
        printf("\n Profit Amount  =  %.4f", Amount);
    }
    else if (Unit_Price > Sales_Amount)
    {
        Amount = Unit_Price - Sales_Amount;
        printf("\n Loss Amount  =  %.4f", Amount);
    }
    else
        printf("\n No Profit No Loss!");
}
int main()
{
    float Unit_Price, Sales_Amount, Amount;

    printf("\n Please Enter the Actual Product Cost : ");
    scanf("%f", &Unit_Price);

    printf("\n Please Enter the Sale Price (or Selling Price) :  ");
    scanf("%f", &Sales_Amount);

    profit_loss(Unit_Price, Sales_Amount);

    return 0;
}