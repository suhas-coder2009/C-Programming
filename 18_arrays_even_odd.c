#include <stdio.h>
int main(){
int i,numbers[10];
    printf("Enter 10 Numbers");
    for(i=0;i<=9;i++){
    scanf("%d",&numbers[i]);
    }
for(i=0;i<=9;i++){
    if(numbers[i]%2==0){
     printf(" Even=%d\n",numbers[i]);   
    }
    else{
    printf("Odd=%d",numbers[i]);  
    }
}
    return 0;
}
