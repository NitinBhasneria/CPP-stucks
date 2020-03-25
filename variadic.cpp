#include <iostream>
#include <cstdarg>
#include<stdio.h>

using namespace std;

void simple_printf(const char* fmt...)
{
    va_list args;
    va_start(args, fmt);
 
    while (*fmt != '\0') {
        if (*fmt == 'd') {
            int i = va_arg(args, int);
            std::cout << i << '\n';
        } else if (*fmt == 'c') {
            // note automatic conversion to integral type
            int c = va_arg(args, int);
            std::cout << static_cast<char>(c) << '\n';
        } else if (*fmt == 'f') {
            double d = va_arg(args, double);
            std::cout << d << '\n';
        }
        ++fmt;
    }
 
    va_end(args);
}
int main() {
    string a = "a", b = "b", c = "c";
    simple_printf("sdf",b,c);
}
  