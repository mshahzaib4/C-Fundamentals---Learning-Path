#include <iostream>
using namespace std;
class first
{
protected:
    int num1,num1_1,num1_1_1;
    public:
    first()
    {
       cout<<endl<<"1Enter First  Number : ";
       cin>>num1;
       cout<<"Enter Second Number : ";
       cin>>num1_1;
       cout<<"Enter Third  Number : ";
       cin>>num1_1_1;
    }
display1()
{
        cout<<endl<<"1Enter First  Number : "<<num1<<endl;
        cout<<"Enter Second Number : "<<num1_1<<endl;
        cout<<"Enter Third  Number : "<<num1_1_1<<endl;
         }

};
class Second:public first
{
protected:
    int num2,num2_2,num2_2_2;
    int swap_num2,swap_num2_2,swap_num2_2_2;
public:
    Second():first()
    {
    cout<<endl<<endl<<"2Enter First  Number : ";
    cin>>num2;
    cout<<"Enter Second Number : ";
    cin>>num2_2;
    cout<<"Enter Third  Number : ";
    cin>>num2_2_2;
    swap_num2=num2;num2=num1;
    swap_num2_2=num2_2;num2_2=num1_1;
    swap_num2_2_2=num2_2_2;num2_2_2=num1_1_1;

    }
    Second(int a,int aa,int aaa){

        num2=swap_num2;
        num2_2=swap_num2_2;
        num2_2_2=swap_num2_2_2;
    }
display2()
{
        cout<<endl<<"2Enter First  Number : "<<num2<<endl;
        cout<<"Enter Second Number : "<<num2_2<<endl;
        cout<<"Enter Third  Number : "<<num2_2_2<<endl;
    }
};

class Third:public Second
{
protected:
    int num3,num3_3,num3_3_3;
public:
    Third():Second()
    {
    cout<<endl<<endl<<"3Enter First  Number : ";
    cin>>num3;
    cout<<"Enter Second Number : ";
    cin>>num3_3;
    cout<<"Enter Third  Number : ";
    cin>>num3_3_3;

    num3=swap_num2;
    num3_3=swap_num2_2;
    num3_3_3=swap_num2_2_2;
    }
display3()
{
    cout<<endl<<"3Enter First  Number : "<<num3<<endl;
    cout<<"Enter Second Number : "<<num3_3<<endl;
    cout<<"Enter Third  Number : "<<num3_3_3<<endl;
     }
};

int main()
{

    Third obj;
    obj.display1();
    cout<<endl;
    obj.display2();
    cout<<endl;
    obj.display3();


}
