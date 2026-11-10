
#include <stdio.h>

int main() {
int i,positive=0,negative=0,zero=0;
int numbers[10];
for(i=0;i<=9;i++){
    scanf("%d",&numbers[i]);
}
for(i=0;i<=9;i++){
   if(numbers[i]>0){
       positive++;
          }
  else if(numbers[i]<0){
      negative++;
  }
  else{
      zero++;
  }
  
   }
       printf("POsitive numbers:%d\n",positive);
             printf("Negative numbers:%d\n",negative);
                   printf("Zero:%d\n",zero);



   

    return 0;
}




