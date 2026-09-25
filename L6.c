#include<stdio.h>

int main(){
int d;
printf("enter day");
scanf("%d",&d);

if(d%7==1){
printf("Monday");
}

if(d%7==2){
printf("Tuesday");
}

if(d%7==3){
printf("Wednesday");
}

if(d%7==4){
printf("Thursday");
}

if(d%7==5){
printf("Friday");
}

if(d%7==6){
printf("Saturday");
}

if(d%7==7){
printf("Sunday");
}

return 0;
}