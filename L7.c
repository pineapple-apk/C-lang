#include<stdio.h>

int main(){
int m;

printf("enter month: ");
scanf("%d",&m);

if(m<13){

if(m==1){
printf("January");
}

if(m==2){
printf("Fabruary");
}

if(m==3){
printf("March");
}

if(m==4){
printf("April");
}

if(m==5){
printf("May");
}

if(m==6){
printf("June");
}

if(m==7){
printf("July");
}

if(m==8){
printf("Agust");
}

if(m==9){
printf("September");
}

if(m==10){
printf("October");
}

if(m==11){
printf("November");
}

if(m==12){
printf("December");
}}

else{
printf("baarh se upar nahi ");
}
return 0;
}