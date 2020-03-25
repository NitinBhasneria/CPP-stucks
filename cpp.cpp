#include<iostream>
#include<string.h>
#include<tuple>

using namespace std;

class Enforcer  {
    private:

    public:
        string a = {"Nitin"};
        
};

tuple <Enforcer, string> newEnforcer (string a) {
    Enforcer e;
    cout<<e.a<<endl;
    e.a  = a ;
    return make_tuple( Enforcer(), "") ; 
}

int main()  {
    Enforcer r;
    r.a = "Nitin1";
    string m;
    int error;
    if(error == NULL)
    cout<<"ofooo";
    cout<<error;
    Enforcer t;
    tie(t,m)=newEnforcer(r.a);
    cout<<t.a;
    cout<<endl<<m;
    return 0;
}