#include<stdio.h>

void sum(int,int,int);

int p,r,t;

int main(){
printf("enter principle value: ");
scanf("%d",&p);

printf("enter value of intrest: ");
scanf("%d",&r);

printf("enter time period: ");
scanf("%d",&t);

sum(p,r,t);

return 0;
}

void sum(int p, int r, int t){
int c =(p*r*t)/100;
printf("%d",c);
};