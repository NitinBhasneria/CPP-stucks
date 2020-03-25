#include<iostream>
#include<stdarg.h>
#include<string>

void name(int n, ...){
    va_list na;
    va_start(na,n);
    for(int i=0;i<n;i++){
        printf(va_arg(na,char*));
        if(i=3)
        if(va_arg(na,bool))
        printf("yess\n\n");
    }
    va_end(na);
}

int main(){
    bool n = false;
    name( 4, "n", "n", "n", n);
    return 0;
}