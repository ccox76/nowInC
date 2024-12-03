#include <stdio.h>

void toBin(char c) {
    if (c <= '9' && c >= '0') {
        c = c - '0';
    } else {
        c = c - 'A' + 10;
    }
    
    printf("Binary equivalent: ");
    for (int i=3;i>=0;i--) {
        printf("%d", c>>i&1);
    }
    printf("\n");
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
        } else {
            toBin(input[0]);
        }
    }
    return 0;
}
