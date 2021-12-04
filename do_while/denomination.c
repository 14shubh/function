// •	Denomination of an Amount

#include <stdio.h>

void denomination(int amt)
{
    int r2000 = 0, r500 = 0, r100 = 0, r50 = 0, r20 = 0, r10 = 0, r5 = 0, r2 = 0, r1 = 0;
    int count = 0;
    do
    {
        r2000 = amt / 2000;
        amt = amt % 2000;
        printf("\nTotal Number Of 2000 Rupees Notes : %d", r2000);
        break;
    } while (amt >= 2000);
    do
    {
        r500 = amt / 500;
        amt = amt % 500;
        printf("\nTotal Number Of 500 Rupees Notes : %d", r500);
        break;
    } while (amt >= 500);
    do
    {
        r100 = amt / 100;
        amt = amt % 100;
        printf("\nTotal Number Of 100 Rupees Notes : %d", r100);
        break;
    } while (amt >= 100);
    do
    {
        r50 = amt / 50;
        amt = amt % 50;
        printf("\nTotal Number Of 50 Rupees Notes : %d", r50);
        break;
    } while (amt >= 50);
    do
    {
        r20 = amt / 20;
        amt = amt % 20;
        printf("\nTotal Number Of 20 Rupees Notes : %d", r20);
        break;
    } while (amt >= 20);
    do
    {
        r10 = amt / 10;
        amt = amt % 10;
        printf("\nTotal Number Of 10 Rupees Notes Or Coin : %d", r10);
        break;
    } while (amt >= 10);
    do
    {
        r5 = amt / 5;
        amt = amt % 5;
        printf("\nTotal Number Of 5 Rupees Notes Or Coin : %d", r5);
        break;
    } while (amt >= 5);
    do
    {
        r2 = amt / 2;
        amt = amt % 2;
        printf("\nTotal Number Of 2 Rupees Notes Or Coin : %d", r2);
        break;
    } while (amt >= 2);
    do
    {
        r1 = amt / 1;
        amt = amt % 1;
        printf("\nTotal Number Of 1 Rupees Note Or Coin : %d", r1);
        break;
    } while (amt >= 1);
    count = r2000 + r500 + r100 + r50 + r20 + r10 + r5 + r2 + r1;
    printf("\n\nTotal Number Of Notes Require : %d\n", count);
}
int main()
{

    int amt;

    printf("Enter The Amount in Rupees : \n\n");
    scanf("%d", &amt);
    denomination(amt);
    return 0;
}