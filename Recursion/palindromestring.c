#include <stdio.h>
#include <string.h>
int isPalindrome(char str[], int start, int end);
int main(){
	printf("This program is made by:Veer Pratap Singh(2100320120184)\n");
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    if (isPalindrome(str, 0, strlen(str) - 1))
        printf("%s is a palindrome", str);
    else
        printf("%s is not a palindrome", str);
    return 0;
}
int isPalindrome(char str[], int start, int end){
    if (start >= end)
        return 1;
    if (str[start] != str[end])
        return 0;
    return isPalindrome(str, start + 1, end - 1);
}

