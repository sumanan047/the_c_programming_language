#include <stdio.h>
#include <ctype.h>

int main() {
    int character_count = 0;
    int c;

    while((c = getchar()) != EOF) {
            ++character_count;
    }
    printf("Character count: %d\n", character_count);
    return 0;
}