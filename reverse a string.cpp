#include<stdio.h>
int main() {
    char str[100];
    int i, j = 0, flag = 1;

    printf("Enter a string: ");
    gets(str);

    while (str[j] != '\0')
        j++;

    for (i = 0; i < j / 2; i++) {
        if (str[i] != str[j - i - 1]) {
            flag = 0;
            break;
        }
    }

    if (flag)
        printf("Palindrome string");
    else
        printf("Not a palindrome string");

    return 0;
}
