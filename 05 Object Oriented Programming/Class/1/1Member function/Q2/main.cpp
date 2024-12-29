#include <iostream>
#include<strings.h>
#include<stdio.h>

using namespace std;
class student{
private:
int Roll_no,marks,comp,en,ma,total;
string name[15];
public:
void input(){
    cout<<"Enter Roll Number :: ";
    cin>>Roll_no;
    cout<<":: Enter Marks ::"<<endl;
    cout<<":: Enter Marks of Three Subject Computer,Math,English :: "<<endl;
    cin>>comp;
    cin>>ma;
    cin>>en;
    cout<<"\n\n";
}
void display(){
    cout<<":::: Student Information ::::"<<endl<<endl;
    cout<<"Roll Number :: "<<Roll_no<<endl;
    cout<<"Computer : "<<comp<<"\nMath : "<<ma<<"\nEnglish : "<<en;
    total_marks(comp,ma,en);
    aver(comp,ma,en);
    array1(comp,ma,en);
}
void array1(int marks1,int marks2,int marks3)
{   int array1[3];
    array1[0]={marks1};
    array1[1]={marks2};
    array1[2]={marks3};
    cout<<"\nMarks in Array :{ ";
    cout<<array1[0]<<"  ";
    cout<<array1[1]<<"  ";
    cout<<array1[2];
    cout<<" }\n\n\n";
}

void total_marks(int comp,int enn,int ma){

    cout<<"\nTotal Number is  : "<<comp+enn+ma;
}
void aver(int comp,int enn,int ma){
    cout<<" and Average  is  : "<<(comp+enn+ma)/3;
}
};

int main()
{
   student Shahzaib;
   Shahzaib.input();
   Shahzaib.display();

   student ali;
   ali.input();
   ali.display();

}
