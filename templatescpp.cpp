#include<iostream>
#include<typeinfo>

using namespace std;
// Variadic templates
template<typename N>
char typeInfo(N n){
    cout<<endl<<typeid(n).name()[0]<<endl;
    return typeid(n).name()[0];
}

template<typename M,typename ... E>
char typeInfo(M n, E... arg ) {
    string Q = {};
     cout<<endl<<typeid(n).name()[0]<<endl;
    int p = sizeof...(arg);
    if(p>0)
     Q = Q+ typeid(n).name()[0] + typeInfo(arg...);
    else Q = Q + typeid(n).name()[0];
     cout<<"hey"<<Q<<endl;
}


template<typename R,typename ... T>
void print(R num, T ... args){
    string S = {};
    int p = sizeof...(args);
    if(p>0)
    S = typeid(num).name()[0] + typeInfo(args ...);
    else S = typeid(num).name()[0];
    cout<<S;
 }

int main(){
    int m=5;
    print("hhelo","adghjhsd","sadasd",false);
}
