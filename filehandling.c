#include<stdio.h>
#include<conio.h>
#include<string.h>
void main(){

    FILE *fp;
    char ch[10];
    int i=0,l=0;

    fp=fopen("fresher.txt","w");

    fprintf(fp,"mycaptain");


    fclose(fp);

    fp=fopen("fresher.txt","r");


    fscanf(fp,"%s",ch);

    l=strlen(ch);

    for(i=l-1;i>=0;i--){
        printf("%c",ch[i]);

    }


    fclose(fp);

    fp=fopen("another.txt","w");

    fprintf(fp,"%s",ch);

    fclose(fp);





}
