#include <iostream>
using namespace std;
class student
{
    private:
    int marks;
    char grade;
    public:
student(int marks2,char grade2)
 {   marks=marks2;
     grade=grade2;
 }
void data()
 {
    cout<<"Enter New Marks of students : ";
    cin>>marks;
    cout<<"Enter New Students grade : ";
    cin>>grade;
}
void display()
 {
            cout<<"\t\t\t\t:::::::::::::: Student Result and grade ::::::::::::::"<<endl;
            cout<<"\nStudent Marks  is "<<marks;
            cout<<" and Student grade  is "<<grade<<endl;
 }
};

int main()
{
        student s1(100,'A');
        s1.display();
        s1.data();

        s1.display();

}
