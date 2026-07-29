#include <stdio.h>

int main(){
int n,limit;    
int i;
 
printf("ENTER YOUR NUMBER");
scanf("%d",&n);
 
 printf("Enter your limit:");
scanf("%d",&limit);
 
  for(i=0;i<=limit; i++){
 printf("%d x %d =%d\n",n,i,n*i);
}

    return 0;
}
