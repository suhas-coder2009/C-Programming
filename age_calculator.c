#include <stdio.h>

int main() {
int Birthyear;
int presentyear;
    printf("Enter your Birth year");
    scanf("%d",&Birthyear);
    
    printf("Enter present year");
    scanf("%d",&presentyear);
    
    printf("Your age is %d",presentyear-Birthyear);
    return 0;
}
