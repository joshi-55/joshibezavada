#include<stdio.h>
int main() {
    char str[100], temp;
    int i, j = 0;

    printf("Enter a string: ");
    gets(str);

    while (str[j] != '\0')
        j++;

    j = j - 1;
    for (i = 0; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

    printf("Reversed string = %s", str);
    return 0;
}
