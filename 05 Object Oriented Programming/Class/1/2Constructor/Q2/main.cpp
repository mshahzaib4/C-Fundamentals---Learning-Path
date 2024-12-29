#include <iostream>
using namespace std;
class tw_float
{
    private:
   float a=100.5,b=100.5;
   public:
Avr()
{
    cout<<"Average"<<a<<endl;
    cout<<"Average"<<b<<endl;
    int avr=(a+b)/100;
    cout<<"Average of two Number : "<<avr;
}
};

int main()
{
    tw_float avv;
    avv.Avr();
}
