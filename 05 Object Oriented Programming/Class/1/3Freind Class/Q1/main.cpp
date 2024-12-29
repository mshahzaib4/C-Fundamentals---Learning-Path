#include <iostream>
using namespace std;
class A
{
private:

    int a=10;
public:
     A(){
        cout<<"Enter first Number :";
        cin>>a;
        }
    friend class B;
};
class B
{
private:
    int b,c;
public:
   void BD(A obj1)
        {
        cout<<"Enter second Number :";
        cin>>c;
        b=obj1.a;
       }
    friend class Add_friend;

};

class Add_friend{
public:
    void Add1(B f1,B f2)
    {
        cout<<endl<<endl;
        cout<<"SUM : "<<f1.b+f1.c<<endl;
        cout<<"SUB : "<<f1.b-f1.c<<endl;
        cout<<"MUL : "<<f1.b*f1.c<<endl;
        cout<<"DIV : "<<f1.b/f1.c<<endl;
    }
};

int main()
{
    A obj;
    B obj1,obj2;
    obj1.BD(obj);

    Add_friend sum1;
    sum1.Add1(obj1,obj2);

}
