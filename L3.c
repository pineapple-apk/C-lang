#include <stdio.h>

int main() {
    float a=6.7;
    a=7.6;
    printf("%f",a);
    const char x='m';
    //x='n';
    printf("%c",x);
    
    char l[4] ="xyz";
    const char m[4] ="abc";
    printf("%s%s",l,m);

    //string p="xyz";
    //const string q="abc";
    //printf("%s%s",p,q);

    return 0;
}