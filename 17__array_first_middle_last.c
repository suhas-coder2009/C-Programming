#include <stdio.h>

int main() {
    int i;
    int numbers[5];

    printf("Enter your 5 numbers: ");

    for(i = 0; i <= 4; i++) {
        scanf("%d", &numbers[i]);
    }

    printf("First = %d Middle = %d Last = %d",
           numbers[0], numbers[2], numbers[4]);

    return 0;
}
