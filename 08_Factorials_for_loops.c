#include <stdio.h>

int main(){
    
int i;
int n;
long long factorial=1;

 printf("Enter Your Number.");
 scanf("%d",&n);
 for(i=1;i<=n;i++){
     factorial=factorial*i;
     
 }
    printf("Factorial of %d=%lld",n,factorial);
    return 0;
}

