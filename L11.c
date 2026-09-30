#include<stdio.h>

int main(){
int m,n,p;

printf("enter value of m: ");
scanf("%d",&m);
printf("enter value of n: ");
scanf("%d",&n);
printf("enter value of p: ");
scanf("%d",&p);


if(m==n){
if(n>p){
printf("m=n>p");
}
else{
printf("m=n<p");
}}

if(m==p){
if(p>n){
printf("m=p>n");
}
else{
printf("m=p<n");
}}

if(p==n){
if(p>m){
printf("p=n>m");
}
else{
printf("p=n<m");
}}

if(m>n){
if(n>p){
printf("m>n&p");
}
else{
printf("m=n<p");
}}

else{
printf("m!=n");
}
return 0;
}