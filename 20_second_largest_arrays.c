#include <stdio.h>

int main() {
    int i, num[10], largest, second_largest;
    int found = 0;

    printf("Enter your Number: ");

    for(i = 0; i <= 9; i++) {
        scanf("%d", &num[i]);
    }

    largest = num[0];

    for(i = 0; i <= 9; i++) {
        if(num[i] > largest) {
            largest = num[i];
        }
    }

    for(i = 0; i <= 9; i++) {
        if(num[i] < largest) {
            if(found == 0 || num[i] > second_largest) {
                second_largest = num[i];
                found = 1;
            }
        }
    }

    printf("Largest = %d\n", largest);

    if(found == 1) {
        printf("Second Largest = %d\n", second_largest);
    }
    else {
        printf("No second largest distinct element");
    }

    return 0;
}
