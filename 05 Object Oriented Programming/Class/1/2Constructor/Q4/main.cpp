#include <iostream>
#include<strings.h>
using namespace std;
class TV
{
    private:
    int price;
    string Model;
public:
TV()
 {
        cout<<"\n\nEnter Price :";cin>>price;
        cout<<"Enter Model :";cin>>Model;
 }

 void display()
 {  int num;
    cout<<"Price :"<<price<<endl;
    cout<<"Model :"<<Model<<endl;
    cout<<"Press 1 to change Price  2 for Model 3 for Both : ";
    cin>>num;
if(num==1)
    {
        cout<<"\n\nEnter New  Price :";cin>>price;}

else if(num==2)
        {
        cout<<"Enter New Model :";cin>>Model;
    }
else if(num==3)
    {
        cout<<"\n\nEnter New  Price :";cin>>price;}
        cout<<"Enter New Model :";cin>>Model;
}

};
int main()
{
     TV stu;
     stu.display();

    }

