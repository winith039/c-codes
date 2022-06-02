#include<stdio.h>
void main(){
int stairs,i,j;
printf("No. of stairs=");
scanf("%d",&stairs);
for(i=0;i<stairs;i++){
for(j=0;j<=i;j++){
printf("01");
}
printf("\n");
}
}
