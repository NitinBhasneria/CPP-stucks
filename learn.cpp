#include<iostream>

using namespace std;

class Enforcer
{
public:
	bool enforce (string sub, string obj, string act);
};

bool Enforcer::enforce(string sub, string obj, string act) {
	return false;
}

int main() {
    Enforcer e;
    bool r;
    r = e.enforce("abc", "abc", "abc");
    if (r)
        cout<<"Pass";
    else
    {
        cout<<"Fail";
    }
    
    return 0;
}