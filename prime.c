//program to check prime number
#include<stdio.h>
int main(){
//variables
int num,mod,i,division;
//input
printf("please enter the number:");
scanf("%d",&num);
division=0;

//operation
for(i=2;i<num;i++){
   mod=num%i;
    if(mod==0)
        division++;


}
//printf("%d",division);
if(division==0)
    printf(" prime");
else
   printf("not prime");
}
