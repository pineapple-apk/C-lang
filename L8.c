#include<stdio.h>

int main(){
int m,n;

printf("enter value of m : ");
scanf("%d",&m);
printf("/nenter value of n : ");
scanf("%d",&n);


if(m==n){
printf("m=n");
}

if(m>n){
printf("m>n");
}

if(m<n){
printf("m<n");
}

else{
printf("m!=n");
}
return 0;
}