#include <stdio.h>
#include <string.h>

int main() {


    char str[50] = "Hello, World!";

    int len = 0;

    while (str[len] != '\0') {
        len++;
    }
    printf("Length of the string: %d\n", len);

    char str2[100];
    printf("Enter a string: ");
    scanf("%s", str2);

    int len2 = 0;

    printf("Length of the new string is: %lu\n", strlen(str2));

    return 0;
}