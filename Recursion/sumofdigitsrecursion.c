#include <stdio.h>

int sumOfDigits(int n) {
   if (n == 0) {
      return 0;
   } else {
      return (n % 10) + sumOfDigits(n / 10);
   }
}

int main() {
	printf("This program is made by:Veer Pratap Singh(2100320120184)\n");
   int n;
   printf("Enter the number:");
   scanf("%d",&n);
   int result = sumOfDigits(n);
   printf("The sum of the digits of %d is %d", n, result);
   return 0;
}

