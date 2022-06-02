#include<stdio.h>
int gcd(int a,int b){
if(a==0){
return b;}
else{
return gcd(b%a,a);}
}
void main(){
int a1,a2,lcm;
printf("Input first number:");
scanf("%d",&a1);
printf("Input second number:");
scanf("%d",&a2);
lcm=a1*a2/gcd(a1,a2);
printf("LCM of %d and %d=%d",a1,a2,lcm);
}
