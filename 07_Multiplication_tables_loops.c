#include <stdio.h>

int main(){
int n;    
int i;
printf("ENTER YOUR NUMBER");
scanf("%d",&n);
for(i=0;i<=10; i++){
 printf("%dx%d=%d\n",n,i,i*n);
}

    return 0;
}
