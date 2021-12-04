// •	Input month number and print number of days in that month.

// C program for the above approach
#include <stdio.h>

// Function to find the number of Days
// in month input by user
void printNumberOfDays(int num)
{

	// Check for 31 Days
	if (num == 1 || num == 3 || num == 5
		|| num == 7 || num == 8 || num == 10
		|| num == 12) {
		printf("31 Days.");
	}

	// Check for 30 Days
	else if (num == 4 || num == 6
			|| num == 9 || num == 11) {
		printf("30 Days.");
	}

	// Check for 28/29 Days
	else if (num == 2) {
		printf("28/29 Days.");
	}

	// Else Invalid Input
	else {
		printf("Invalid Month.");
	}
}

// Driver Code
int main()
{
	// Input Month
	int num;
    printf("Enter month number : ");
    scanf("%d",&num);

	// Function Call
	printNumberOfDays(num);

	return 0;
}
