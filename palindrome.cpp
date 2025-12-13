#include<stdio.h>
 int main() {
      int num, rev = 0, temp, rem;
    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;
    while (num > 0) {
        rem = num % 10;
        rev = rev * 10 + rem;
        num /= 10;
    }

    if (rev == temp)
        printf("Palindrome");
    else
        printf("Not a Palindrome");

    return 0;
}
