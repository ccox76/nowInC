#include <stdio.h>
#include <string.h>

void toBin(char c) {
    int go = 0;
    if (c <= '9' && c >= '0') {
        c = c - '0';
        go = 1;
    } else if (c <= 'F' && c >= 'A') {
        c = c - 'A' + 10;
        go = 1;
    } else if (c == 'X') {
        printf("ending...");
    } else {
        printf("char out of range.\n");
    }
    if (go) {
        printf("Binary equivalent: ");
        for (int i=3;i>=0;i--) {
            printf("%d", c>>i&1);
        }
        printf("\n");
    }
}

int main() {
    char in;
    char* input = &in;
    int go = 1;

    while (go) {
        printf("Enter char: \n");
        scanf("%s", input);

        if (input[0] == 'X') {
            go = 0;
        }
        if (strlen(input) != 1) {
            printf("Multiple chars entered. Try again\n");
        } else {
            toBin(input[0]);
        }
    }
    return 0;
}
