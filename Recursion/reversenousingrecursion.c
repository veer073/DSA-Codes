#include <stdio.h>
int reverse(int n);
int main()
{
	printf("This program is made by:Veer Pratap Singh(2100320120184)\n");
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Reversed number: %d", reverse(n));
    return 0;
}

int reverse(int n)
{
    if (n == 0)
        return 0;
    else
        return (n % 10) * pow(10, (int)log10(n)) + reverse(n / 10);
}

