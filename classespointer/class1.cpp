#include <iostream>
#include <string>

using namespace std;

class student{
    public:
    int roll;
    string name;
    int nana;
    void getdata(int x, string y){
        roll = x;
        name = y;
    }
    void printdata(){
        cout<<roll<<name;
    }    
};

void printt(){
    student *obj1;
    cout<<obj1->roll;
}

int main(){
    student obj;      //normal onject
    student *obj1;    // pointer type object
    obj1 = &obj;     // initialization of pointer obj1
    string name = "Nitin";
    int roll = 87;
    obj1->getdata(roll,name);
    obj1->printdata();
    printt();
    string a;
    a= typeid(obj).name();
    cout<<endl<<a;
}



// obj.func();
// obj1->fucn();
// (*obj1).func();