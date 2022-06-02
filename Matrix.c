#include<stdio.h>
void main(){
int i,j,mat[3][3],sum=0;
for(i=0;i<3;i++){
for(j=0;j<3;j++){
        printf("element-[%d],[%d]",i,j);
        scanf("%d",&mat[i][j]);
}}
for(i=0;i<3;i++){
    for(j=0;j<3;j++){

        printf("%d ",*(*(mat+i)+j));
}
printf("\n");
}
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        if(i==j){
            sum=sum+mat[i][j];
        }
    }
}
printf("%d",sum);
}
