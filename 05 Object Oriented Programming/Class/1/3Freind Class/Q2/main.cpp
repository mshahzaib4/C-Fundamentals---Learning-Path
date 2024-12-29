#include <iostream>
using namespace std;
class A
{
private:
    int a;
public:
    A(){
    cout<<"Enter Number :";
    cin>>a;
        }
    friend class B;
};
class B{
private:
    int b,B;
public:
   void friend_B(A pr)
    {
     B=pr.a;
    }
friend class C;
};
class C
{

private:
        int c;
public:
    friend_C(B pr1)
    {
        c=pr1.B;
    }
    friend class D;
};

class D{

private:
    int d;
public:
    friend_D(C pr3)
    {
    cout<<pr3.c;
    }
};
int main()
{
    A obj;
    B obj1;
    obj1.friend_B(obj);
    C obj2;
    obj2.friend_C(obj1);
    D obj3;
    obj3.friend_D(obj2);
}
