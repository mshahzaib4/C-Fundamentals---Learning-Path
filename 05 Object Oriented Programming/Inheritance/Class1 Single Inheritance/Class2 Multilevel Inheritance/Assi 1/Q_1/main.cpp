#include <iostream>
using namespace std;
class named_marks{

protected:
    int number,Roll_number,no_of_stu;
    char name[20];
public:
    named_marks()
    {
        cout<<"Enter name of student :: ";
        cin.getline(name,20);
        cout<<"Enter number of students in the class :: ";
        cin>>no_of_stu;
        cout<<"Enter Roll no of student :: ";
        cin>>Roll_number;
        cout<<"Enter Number of student :: ";
        cin>>number;
    }

};
class Networking:public named_marks{
protected:
        int networking;
public:
        Networking():named_marks()
        {
        cout<<"Enter Number of student in Chemistry :: ";
        cin>>networking;
        }
};
class English:public Networking{
protected:
        int english;
public:
        English():Networking()
        {
        cout<<"Enter Number of student in Chemistry :: ";
        cin>>english;
        }
};
class Computer:public English{
protected:
    int computer;
public:
    Computer():English()
    {
    cout<<"Enter Number of student in Chemistry :: ";
    cin>>computer;
    }
};
class display:public Computer{
public:
    display():Computer()
    {
    int avr= (computer+networking+english)/3;
    cout<<"\nName       : "<<name<<endl;
    cout<<"Students in class : "<<no_of_stu<<endl;
    cout<<"  Roll no    : "<<Roll_number<<endl;
    cout<<"  Number     : "<<number<<endl;
    cout<<"  Networking : "<<computer<<endl;
    cout<<"  English    : "<<computer<<endl;
    cout<<"  Computer   : "<<computer<<endl;
    cout<<"  Average    : "<<avr<<endl;

    }
};

int main()
{
        display student;

}
