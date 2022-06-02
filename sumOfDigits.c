#include<stdio.h>
int addition(int num){
int rem,sum;
rem=num%10;
if(num==0){
return 0;}
else{
return sum=rem+addition(num/10);}}

void main(){
int s,n;
printf("Input number:");
scanf("%d",&n);
printf("sum of digits: %d",addition(n));
}
