#include <iostream>
using namespace std;
class Data_Enter{
public:
    char name[15],adress[20],city[10],Distr[20],Qulifaction[20];
    int ID;
    int Date,Month,Year,current_date,current_Month,current_Year,Year_year;
    long P_NO;
    int day;
    void date();
    void display()
    {
if(Year_year>=18)
        {
        cout<<" Name         :"<<name<<endl;
        cout<<" ID           :"<<ID<<endl;
        cout<<" Phone Number :"<<P_NO<<endl;
        cout<<" Address       : "<<adress<<endl;
        cout<<" City          : "<<city<<endl;
        cout<<" District      : "<<Distr<<endl;
        cout<<" Qualification : "<<Qulifaction<<endl;
        }
        }

public:
    Data_Enter(){
        cout<<endl<<endl;
        cout<<" Enter Your Name          :";
        cin.getline(name,20);
        cout<<" Enter Your ID            :";
        cin>>ID;
        cout<<" Enter Your Phone Number  :";
        cin>>P_NO;
        date();
    }
};

class student:public Data_Enter{

public:
   void input1(){
if(Year_year>=18){
        int ID1,P_NO1,update;
        char name1[15];
        cout<<"\n\t\t\t\t Enter [ 1 ] for update : ";
        cin>>update;
        if(update==1)
        {
        cout<<"Enter Your Name         :";
        cin>>name1;
        cout<<"Enter Your ID           :";
        cin>>ID1;
        cout<<"Enter Your Phone Number :";
        cin>>P_NO1;
        //name=name1;
        ID=ID1;
        P_NO=P_NO1;
        }
        cin.getline(adress,20);
        cout<<" Enter Your Address       : ";
        cin.getline(adress,20);
        cout<<" Enter Your City          : ";
        cin.getline(city,10);
        cout<<" Enter Your District      : ";
        cin.getline(Distr,20);
        cout<<" Enter Your Qualification : ";
        cin.getline(Qulifaction,20);
        cout<<"\n\t\t\t\tYou Enter Data Successfully "<<endl<<endl;

             }
        else
            cout<<" Sorry You do not Enter Data Because Your age "<<Year_year<<"smaller than 18";
    }
};

class Job_holder:public Data_Enter {

public:
   void input1(){
if(Year_year>=18)
   {
        int ID1,P_NO1,update;
        char name1[15];
        cout<<"\n\t\t\t\t Enter [ 1 ] for update : ";
        cin>>update;
        if(update==1)
        {
        cout<<" Enter Your Name             :";
        cin>>name1;
        cout<<" Enter Your ID               :";
        cin>>ID1;
        cout<<" Enter Your Phone Number     :";
        cin>>P_NO1;
        //name=name1;
        ID=ID1;
        P_NO=P_NO1;
        }
        cin.getline(adress,20);
        cout<<" Enter Your Address       : ";
        cin.getline(adress,20);
        cout<<" Enter Your City          : ";
        cin.getline(city,10);
        cout<<" Enter Your District      : ";
        cin.getline(Distr,20);
        cout<<" Enter Your Qualification : ";
        cin.getline(Qulifaction,20);
        cout<<"\n\t\t\t\tYou Enter Data Successfully "<<endl<<endl;

         }
        else
            cout<<" Sorry You do not Enter Data Because Your age "<<Year_year<<"smaller than 18";
    }


};
class unemploy:public Data_Enter{


public:

       void input1(){
if(Year_year>=18)
   {
        int ID1,P_NO1,update;
        char name1[15];
        cout<<"\n\t\t\t\t Enter [ 1 ] for update : ";
        cin>>update;
        if(update==1)
        {
        cout<<" Enter Your Name          :";
        cin>>name1;
        cout<<" Enter Your ID            :";
        cin>>ID1;
        cout<<" Enter Your Phone Number  :";
        cin>>P_NO1;
        //name=name1;
        ID=ID1;
        P_NO=P_NO1;
        }
        cin.getline(adress,20);
        cout<<" Enter Your Address       : ";
        cin.getline(adress,20);
        cout<<" Enter Your City          : ";
        cin.getline(city,10);
        cout<<" Enter Your District      : ";
        cin.getline(Distr,20);
        cout<<" Enter Your Qualification : ";
        cin.getline(Qulifaction,20);
        cout<<"\n\t\t\t\tYou Enter Data Successfully "<<endl<<endl;

}
else
            cout<<" Sorry You do not Enter Data Because Your age "<<Year_year<<"smaller than 18";
    }


};

void Data_Enter::date(){
        cout<<endl;
        cout<<" :::: Enter Current Date :::::  "<<endl;
        cout<<" Date  :";
        cin>>current_date;
        cout<<" Month : ";
        cin>>current_Month;
        cout<<" Year  : ";
        cin>>current_Year;
        cout<<" "<<current_date<<" / "<<current_Month<<" / "<<current_Year<<endl;
        cout<<" :::: Enter Date of Brith :::::  "<<endl;
        cout<<" DATE  : ";
        cin>>Date;
        cout<<" Month : ";
        cin>>Month;
        cout<<" Year  : ";
        cin>>Year;
        Year_year=current_Year-Year;
        cout<<" "<<Date<<" / "<<Month<<" / "<<Year<<endl;
        if(current_date>=Date && current_Month>=Month)
        Year_year+=1;
        cout<<"\n You are "<<Year_year<<" Year old"<<endl;
}
int main()
{
    student obj1;
    obj1.input1();
    cout<<endl<<endl;
    obj1.display();

}

