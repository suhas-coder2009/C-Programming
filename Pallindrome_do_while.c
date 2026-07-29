#include  <stdio.h>
int main(){
int original;
int integer;
int digit;
int reverse=0;

printf("Enter Your integer you want to reverse:");
scanf("%d",&integer);
original=integer;
do{
   digit=integer%10;
   reverse=reverse*10+digit;
  integer=integer/10;
}
while(integer!=0);
printf("Reverse=%d\n",reverse);

 if(original==reverse){
     printf("Yes,it is a Pallindrome.");
 }
 else{
     printf("it is not a Pallindrome.");
 }
return 0;
}
