
#include <stdio.h>

int main() {
char operation;
double n1,n2 ;
  printf("Enter two numbers");
  scanf("%lf %lf",&n1,&n2);
  
  printf("enter the operator +,-,*,/");
  scanf(" %c",&operation);
  
  
switch(operation){
    case '+':
    printf("%.1lf + %.1lf = %.1lf",n1,n2,n1+n2);
    break;
    case '-':
    printf("%.1lf - %.1lf = %.1lf",n1,n2,n1-n2);
    break;
    case '*':
    printf("%.1lf * %.1lf = %.1lf",n1,n2,n1*n2);
    break;
    case '/':
    if(n2 !=0){
        
    printf("%.1lf / %.1lf = %.1lf",n1,n2,n1/n2);
    }
    else{
        printf("CAN'T DIVIDE BY ZERO");
    }
    break;
    default:
    printf("ERROR!");
    
}
    return 0;
}
