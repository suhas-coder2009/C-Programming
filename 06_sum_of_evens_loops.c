#include <stdio.h>

int main()
{
int n;
int i;
int sum=0;
printf("Enter Your Number");
scanf("%d",&n);
for(i=0;i<=n;i+=2){
   sum=sum+i;
 printf("%d+%d=%d\n",i,sum-i,sum);
}

    return 0;
}
