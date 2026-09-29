#include<stdio.h>

int main(){
char a;

printf("is black really black ");
printf("y/n? ");
scanf("%c",&a);

switch(a){

case 'y':
printf("you said %c that's true caus black is really black!! ",a);
break;

default:
printf("why u saying %c is black not really black?? ",a);
}
return 0;
}