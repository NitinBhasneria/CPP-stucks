// The auto keyword specifies that the type of the variable that is being 
// declared will be automatically deducted from its initializer.
// In case of functions, if their return type is auto then
// that will be evaluated by return type expression at runtime.

// C++ program to demonstrate working of auto 
// and type inference 
#include <bits/stdc++.h> 
#include <string>
using namespace std; 
  
int main() 
{ 
    auto x = 4; 
    auto y = 3.37; 
    auto ptr = &x; 
    auto ra= "a";  
    auto a=false;
    cout << typeid(x).name() << endl 
         << typeid(y).name() << endl 
         << typeid(ptr).name() << endl
         << typeid(ra).name() << endl; 
  
    return 0; 
} 