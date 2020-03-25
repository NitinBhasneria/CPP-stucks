#include <iostream>
using namespace std;
template<typename Base, typename T>
inline bool instanceof(const T*) {
   return is_base_of<Base, T>::value;
}
class Child { };
class AnotherClass{};
int main() {
   Child *c;
   if(is_base_of<Child, c> {
      cout << "c is instance of Child class" << endl;
   } else {
      cout << "c is not instance of Child class" << endl;
   }
}