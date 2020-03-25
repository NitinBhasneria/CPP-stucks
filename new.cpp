#include <iostream>
#include <stdarg.h>

template<typename T>
T average(int num,T ...){
    int sum = 0;
     va_list lst;
     va_start(lst,num);
     for(int i=0;i<num;i++){
         auto n = va_arg(lst,T);
         auto r= typeid(n).name();
         printf("%s",r);
     }
     va_end(lst);

}

int main()
{   printf("Average = %d", average(5,3,5,"hello",4,2));
    return 0;
}