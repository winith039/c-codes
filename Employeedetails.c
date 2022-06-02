#include<stdio.h>
#include<string.h>
struct name{
char name[21][10];
int top;
};

typedef struct name name;
name n;

struct age{
int age[21];
int top;
};

typedef struct age age;
age a;

struct no{
int num[21];
int top;
};

typedef struct no num;
num no;

struct salary{
int sal[21];
int top;
};

typedef struct salary sal;
sal s;


void main(){
char name[10];
int age,sal,i,flag=0,j;
int num;
n.top=-1;
a.top=-1;
no.top=-1;
s.top=-1;

for(j=0;j<20;j++){
printf("Name:");
scanf("%s",name);
n.top=n.top+1;
strcpy(n.name[n.top],name);

printf("age:");
scanf("%d",&age);
a.top=a.top+1;
a.age[a.top]=age;

printf("phone number:");
scanf("%d",&num);
no.top=no.top+1;
no.num[n.top]=num;

printf("salary:");
scanf("%d",&sal);
s.top=s.top+1;
s.sal[n.top]=sal;
printf("\n\nName        Age     phone number     Salary\n");
for(i=0;i<=s.top;i++){
    printf("%s      %d      %d     %d\n",n.name[i],a.age[i],no.num[i],s.sal[i]);
}
printf("\n\n");

}
}
