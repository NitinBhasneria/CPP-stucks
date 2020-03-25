#include<iostream> 
#include<tuple> 
  
using namespace std; 
  
tuple <int, int> findGreaterSmaller(int a, int b) 
{ 
    if (a < b) { 
    return make_tuple(a, b); 
    } 
    else { 
    return make_tuple(b, a); 
    } 
} 
  
// Driver code 
int main() 
{ 
    int x = 5, y= 8; 
    int max, min; 
    tie(min, max) = findGreaterSmaller(x, y); 
  
    printf("The greater number is %d and the "
        "smaller number is %d", 
        max, min); 
  
    return 0; 
} 
  