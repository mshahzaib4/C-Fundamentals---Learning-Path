#include <iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
int password;
class Password{
public:
    Password()
    {
    cout<<"\n\n\t\t\t\t ************** Shahzaib Yaqoob *****************"<<endl;
    cout<<endl<<endl<<"If You want to exit Enter zero '0' "<<endl;
    cout<<"Enter Password\n\t\t";
    cin>>password;
if(password==0)
        exit(0);
if(password==111)
        {
    cout<<"\t\t\t::::::::::::::::::::: Welcome to the library :::::::::::::::::::::"<<endl<<endl;
    cout<<"-> : Add Book\n-> : Delete Book\n-> : Update Book\n-> : Total number of Book";
    cout<<"\n-> : Total number of Student\n-> : Total number of Teacher "<<endl;
        }
for(;password!=111;)
        {
    cout<<endl<<endl<<":::::::::::::::::::::::: password is invalid ::::::::::::::::::::::::"<<endl<<endl;
    cout<<"If You want to exit Enter zero '0' "<<endl;
    cout<<"Enter Password\n\t\t";
    cin>>password;
    if(password==0)
       {
        cout<<" \n\n\t\t\t  Thankful for coming in the library ";
        exit(0);
       }
        }
    }
};
class Add{
protected:
    char Book_name[100][15],Author[100][15],Book_ID[100][15],Student_Registration[100][15];
    char Student_Registration_ID[100][15],Teacher_Registration[100][15],Teacher_Registration_ID[100][15];
    /*_-_-_-_-_-___-_-_-_-_-___-_-_-_-_-___-_-_-_-_-___-_-_-_-_-___-_-_-_-_-___-_-_-_-_-___-_-_-_-_-___-_-_-_-_-__*/
    char ID_Delete[100][15],ex_Delete[100][15]={"0"};
    int check_delete,goto_delete_statments=0,check1=0;
    /*_-_-_-_-_-___-_-_-_-_-___-_-_-_-_-___-_-_-_-_-___-_-_-_-_-___-_-_-_-_-___-_-_-_-_-___-_-_-_-_-___-_-_-_-_-__*/
    char Update_Book_name[100][15],Update_Author[100][15],Update_Book_ID[100][15],old_book_ID[100][15];
    int check;
    /*_-_-_-_-_-___-_-_-_-_-___-_-_-_-_-___-_-_-_-_-___-_-_-_-_-___-_-_-_-_-___-_-_-_-_-___-_-_-_-_-___-_-_-_-_-__*/
    char copy_Book_name[100][15],copy_Author[100][15],copy_Book_ID[100][15];
    int Num_of_Books=0,b,num_f_stu=0,num_f_Tec=0,Again_name;
;
public:
    Add(){
for(int a=1,R=0;a==1;R++)
        {
    cout<<"\n\n\t\t\t  ::::::::::::::::::::::: Add Book information :::::::::::::::::"<<endl;
    cout<<"Enter Book Name : ";
    cin>>Book_name[R];
    cout<<"Enter Book Written by : ";
    cin>>Author[R];
    cout<<"Enter Book ID :";
    cin>>Book_ID[R];
    strcpy(copy_Book_name[R],Book_name[R]);
    strcpy(copy_Author[R],Author[R]);
    strcpy(copy_Book_ID[R],Book_ID[R]);
    a=2;
    cout<<"\n\t\t\t\t      Enter 1 for Register New Book otherwise. Enter Any number for skip  "<<endl;
    cout<<"\t\t\t\t\t\t  ";
    cin>>a;
    Num_of_Books++;
        }

for(int R=0;R<Num_of_Books;R++)
    if(R=='\0')
    cout<<endl<<endl<<"\t\t\t\t      Your Registration is approved and You Add only "<<Num_of_Books<<" Books "<<endl<<endl;

    cout<<"\n\t\t\t\t      Enter 2 for Add  Student & Teacher Registration or Enter Any number To skip it."<<endl;
    cout<<"\t\t\t\t\t\t  ";
    cin>>b;
for(int R=0;b==2;R++)
    {
    cout<<"\n\n\t\t\t  ::::::::::::::::::::::: Add Student information :::::::::::::::::";
    cout<<"\n\t\t\t\t  Enter 1 for Student";
    cout<<"\n\t\t\t\t  Enter 2 for Teacher";
    cout<<"\n\t\t\t\t  Enter 3 for Teacher & Student ";
    cout<<"\n\t\t\t\t\t ";
    cin>>Again_name;
if(Again_name==1){
    cout<<endl<<"Enter Student name : ";
    cin>>Student_Registration[R];
    cout<<"Enter Student ID : ";
    cin>>Student_Registration_ID[R];
     ++num_f_stu;
    }
if(Again_name==2){
    cout<<endl<<"Enter Teacher name : ";
    cin>>Teacher_Registration[R];
    cout<<"Enter Teacher ID : ";
    cin>>Teacher_Registration_ID[R];
    ++num_f_Tec;
    }
if(Again_name==3)
{
    cout<<endl<<"Enter Teacher name : ";
    cin>>Teacher_Registration[R];
    cout<<"Enter Teacher ID : ";
    cin>>Teacher_Registration_ID[R];
    cout<<endl<<"Enter Student name : ";
    cin>>Student_Registration[R];
    cout<<"Enter Student ID : ";
    cin>>Student_Registration_ID[R];
    ++num_f_stu;
    ++num_f_Tec;
}
    cout<<endl<<endl<<"\n\t\t\t\t      Registration Done!!"<<endl<<endl;
    cout<<"\n\t\t\t\t      Enter 2 for Register New Teacher & Student data.Enter Any number for skip ."<<endl;
    cout<<"\t\t\t\t\t\t  ";
    cin>>b;
    cout<<endl;
    }
for(int R=0,r=1;R<Num_of_Books;R++,r++)
{
    if(R==0)
    {
    cout<<"\n\t\t\t\t      _-_-_-_-_-___-_-_-_-_-___-_-_-_-_-___-_-_-_-_-___-_-_-_-_-"<<endl<<endl;
    cout<<"\n\t\t\t\t\t\t   Book Information!!"<<endl;
    cout<<"\n\t\t\t\t      _-_-_-_-_-___-_-_-_-_-___-_-_-_-_-___-_-_-_-_-___-_-_-_-_-"<<endl<<endl;
}
    cout<<"\t\t\t\t\tBook "<<r<<":- "<<Book_name[R]<<"\t\t\t"<<Author[R]<<"\t\t\t"<<Book_ID[R]<<endl<<endl;
    if(R=='\0')
    goto_delete_statments=4;
}
for(int R=0,r=1;R<num_f_stu;R++,r++)
{
    if(R==0)
    {
    cout<<"\n\t\t\t\t      _-_-_-_-_-___-_-_-_-_-___-_-_-_-_-___-_-_-_-_-___-_-_-_-_-"<<endl<<endl;
    cout<<"\t\t\t\t\t\t   Student Information!!"<<endl;
    cout<<"\n\t\t\t\t      _-_-_-_-_-___-_-_-_-_-___-_-_-_-_-___-_-_-_-_-___-_-_-_-_-"<<endl<<endl;
}
    cout<<"\t\t\t\t\tStudent "<<r<<":- "<<Student_Registration[R]<<"\t\t\t"<<Student_Registration_ID[R]<<endl<<endl;
    if(R=='\0')
    goto_delete_statments=4;
}

for(int R=0,r=1;R<num_f_Tec;R++,r++)
{
    if(R==0)
    {
    cout<<"\n\t\t\t\t      _-_-_-_-_-___-_-_-_-_-___-_-_-_-_-___-_-_-_-_-___-_-_-_-_-"<<endl<<endl;
    cout<<"\t\t\t\t\t\t   Teacher Information!!"<<endl;
    cout<<"\n\t\t\t\t      _-_-_-_-_-___-_-_-_-_-___-_-_-_-_-___-_-_-_-_-___-_-_-_-_-"<<endl<<endl;
}
    cout<<"\t\t\t\t\tTeacher "<<r<<":- "<<Teacher_Registration[R]<<"\t\t\t"<<Teacher_Registration_ID[R]<<endl<<endl;
    if(R=='\0')
    goto_delete_statments=4;
}
if(goto_delete_statments==4)
while(check_delete!=1&&check_delete!=2&&check_delete!=3&&check_delete!=4)
    {
    cout<<"\n\t\t\t\t  If you want to Delete Book :: Enter 1 "<<endl;
    cout<<"\n\t\t\t\t  If you want to Update Book Data :: Enter 2 "<<endl;
    cout<<"\n\t\t\t\t  If you want to Delete Book and Update Book Data :: Enter 3"<<endl;
    cout<<"\n\t\t\t\t  If you want to not Delete Book and Update Book Data :: Enter 4"<<endl;
    cout<<"\n\t\t\t\t  If You want to exit Enter zero '0' "<<endl;
    cout<<"\t\t\t\t\t\t\t\t ";

    cin>>check_delete;//cout<<endl;
    if(check_delete==0)
      {
        cout<<" \n\n\t\t\t  Thankful for coming in the library ";
        exit(0);
       }
        }
    }
    void Delete();
    void Update_Book();
    void display_All_Dta();
};

void Add::Delete(){
if(check_delete==1||check_delete==3)
    {
    cout<<"\n\n\t\t\t  ::::::::::::::::::::::: Delete Book :::::::::::::::::"<<endl;
    cout<<"Enter ID For Delete Book : ";
    cin>>ID_Delete[1];
for(int r=0;r<=Num_of_Books;r++)
    {
if(strcmp(ID_Delete[1],Book_ID[r])==0)
    {
    cout<<"\n\t\t\t\t  Successfully Delete!!"<<endl<<endl;
    strcpy(Book_name[r],ex_Delete[1]);
    strcpy(Book_ID[r],ex_Delete[1]);
    strcpy(Author[r],ex_Delete[1]);
    check1=1;
    }
else
    if(r=='\0')
    {cout<<"\n\t\t\t This book is not present in library so you will not Delete the book!!"<<endl<<endl;
    check1=1;}
    }}
}
void Add ::Update_Book(){
if(check_delete==2||check_delete==3)
    {
        cout<<"\n\n\t\t\t  ::::::::::::::::::::::: Update Book Data  :::::::::::::::::"<<endl;
        cout<<"Enter Book ID For Update Data : ";
        cin>>old_book_ID[1];
for(int R=0;R<Num_of_Books;R++){
if(strcmp(old_book_ID[1],Book_ID[R])==0){
        cout<<"Enter new Book Name : ";
        cin>>Update_Book_name[1];
        cout<<"Enter new Book ID   : ";
        cin>>Update_Book_ID[1];
        cout<<"Enter new Author name   : ";
        cin>>Update_Author[1];
        strcpy(Book_name[R],Update_Book_name[1]);
        strcpy(Book_ID[R],Update_Book_ID[1]);
        strcpy(Author[R],Update_Author[1]);
        check1=1;
            }
else
    if(R=='\0')
    {cout<<"\n\t\t\t This book is not present in library so you will not update the book!!"<<endl<<endl;
    check1=1;}
       }
}
if(check1==1)
while(check!=1&&check!=2&&check!=3)
    {cout<<"\n\t\t\t\t  How many book, Student and teacher are register in library!!"<<endl;
    cout<<"\n\t\t\t\t  Enter 1 for display data student registration!!"<<endl;
    cout<<"\n\t\t\t\t  Enter 2 for display data Book Registration!!"<<endl;
    cout<<"\n\t\t\t\t  Enter 3 for Display ( Book Data & Student registration )!!"<<endl;
    cout<<"\n\t\t\t\t  If You want to exit Enter zero '0' "<<endl;
    cout<<"\t\t\t\t\t\t\t\t";
    cin>>check;
    if(check==0)
        {
        cout<<" \n\n\t\t\t  Thankful for coming in the library ";
        exit(0);
       }
}
}
void Add::display_All_Dta(){
if(check==1||check==3)
{
    for(int R=0;R<Num_of_Books;)
    {
if(R==0)
    {
    cout<<"\n\t\t\t\t        _-_-_-_-_-___-_-_-_-_-___-_-_-_-_-___-_-_-_-_-___-_-_-_-_-"<<endl<<endl;
    cout<<"\t\t\t\t\t\t   Book Information!!"<<endl;
    cout<<"\n\t\t\t\t        _-_-_-_-_-___-_-_-_-_-___-_-_-_-_-___-_-_-_-_-___-_-_-_-_-"<<endl<<endl;
    }
    cout<<"\n\t\t\t  Book "<<R++<<":- "<<Book_name[R]<<"\t\t\t"<<Author[R]<<"\t\t\t"<<Book_ID[R]<<endl<<endl;
if(R=='\0')
    cout<<"\n\t\t\t\t  Total number of book are register : "<<R++;
    cout<<endl<<endl;
        }}
if(check==2||check==3)
    {
    for(int R=0;R<Num_of_Books;)
            {
if(R==0)
    {
    cout<<"\n\t\t\t\t        _-_-_-_-_-___-_-_-_-_-___-_-_-_-_-___-_-_-_-_-___-_-_-_-_-"<<endl<<endl;
    cout<<"\t\t\t\t\t\t   Student Information!!"<<endl;
    cout<<"\n\t\t\t\t        _-_-_-_-_-___-_-_-_-_-___-_-_-_-_-___-_-_-_-_-___-_-_-_-_-"<<endl<<endl;
}
    cout<<"\n\t\t\t  Student "<<R++<<":- "<<Student_Registration[R]<<"\t\t\t"<<Student_Registration_ID[R]<<endl<<endl;
if(R=='\0')
    cout<<"\t\t\t\t  Total number of Student are register : "<<R++;
    cout<<endl<<endl;
            }       }
}
class issue_book:public Add{
protected:
    char Student_issue[100][15],Student_issue_ID[10][50],Techer_issue[100][15],Techer_issue_ID[100][15];
    char Book_name_issue[100][15],Book_Author_issue[100][15],Book_issue_ID[100][15];
    int issue_Date,issue_Month,issue_Year,Fine,goto_Stm2;
public:
    void issue_book_input()
    {
    cout<<"\n\n\t\t\t  ::::::::::::::::::::::: Issue Book Data  :::::::::::::::::"<<endl;
    cout<<"\n\t\t\t\t  Enter 1 for Student";
    cout<<"\n\t\t\t\t  Enter 2 for Teacher"<<endl;
    cout<<"\n\t\t\t\t  If You want to exit Enter zero '0' "<<endl;
    cout<<"\t\t\t\t\t ";
    cin>>Again_name;
if(Again_name==0)
    {
        cout<<" \n\n\t\t\t  Thankful for coming in the library ";
        exit(0);
       }
if(Again_name==1)
        {
    cout<<"\n\n\t\t\t  ::::::::::::::::::::::: Issue Book :::::::::::::::::"<<endl;
    cout<<"Enter Student name for issue book : ";
    cin>>Student_issue[1];
    cout<<"Enter Student ID  for issue book  : ";
    cin>>Student_issue_ID[1];
    goto_Stm2=4;
        }
if(Again_name==2)
        {
    cout<<"\n\n\t\t\t  ::::::::::::::::::::::: Issue Book :::::::::::::::::"<<endl;
    cout<<"Enter Teacher name for issue book : ";
    cin>>Techer_issue[1];
    cout<<"Enter Teacher ID  for issue book  : ";
    cin>>Techer_issue_ID[1];
    goto_Stm2=4;
        }
if(goto_Stm2=4)
    {
    cout<<"Enter Book name : ";
    cin>>Book_name_issue[1];
    cout<<"Enter Book Author name : ";
    cin>>Book_Author_issue[1];
    cout<<"Enter Book ID : ";
    cin>>Book_issue_ID[1];
    cout<<"Enter Date  : ";
    cin>>issue_Date;
    cout<<"Enter Month  : ";
    cin>>issue_Month;
    cout<<"Enter Year  : ";
    cin>>issue_Year;
    cout<<"Enter How many Days You have for Return Book Enter Days ( 1 to 120 ) : ";
    cin>>Fine;
        }
for(int R=0;R<Num_of_Books;R++)
{
    if((strcmp(Student_issue_ID[1],Student_Registration_ID[R])==0&&strcmp(Student_issue[1],Student_Registration[R])==0)||
   (strcmp(Teacher_Registration_ID[R],Techer_issue_ID[1])==0 && strcasecmp(Techer_issue[1],Teacher_Registration[R])==0))
   {
for(int r=0;r<Num_of_Books;r++)

    if(strcmp(Book_name_issue[1],Book_name[r])==0&&strcmp(Book_Author_issue[1],Author[r])==0&&strcmp(Book_issue_ID[1],Book_ID[r])==0)
        {
    if(Again_name==1)
    cout<<endl<<"\n\n\t\t\t\t\t [ "<<Student_issue[1]<<" ] In your ID this Book [ "<<Book_name_issue[1]<<" ] is issue. On "<<issue_Date<<" / "<<issue_Month<<" / "<<issue_Year<<endl;
    else if(Again_name==2)
    cout<<endl<<"\n\n\t\t\t\t [ "<<Techer_issue[1]<<" ] In your ID this Book [ "<<Book_name_issue[1]<<" ] is issue. On "<<issue_Date<<" / "<<issue_Month<<" / "<<issue_Year<<endl;

    issue_Date+=Fine;
    if(issue_Date>30 && issue_Date<=60)
       {
        issue_Month+=1;
        issue_Date=issue_Date-30;
            }
    else if(issue_Date>60&&issue_Date<=90)
       {
        issue_Month+=2;
        issue_Date=issue_Date-60;
            }
    else if(issue_Date>90&&issue_Date<=120)
       {
        issue_Month+=3;
        issue_Date=issue_Date-90;
            }
    else if(issue_Date>=120)
       {
        issue_Month+=4;
        issue_Date=issue_Date-120;
            }
    else
        issue_Date+=Fine;

        if(issue_Date<0)
            issue_Date=-(issue_Date);

if(r=='\0')
        cout<<endl<<"\t\t\t\n [ Note You Return in [ "<<issue_Date<<" / "<<issue_Month<<" / "<<issue_Year<<" ] otherwise you give 5 Rupees Fine per day. ]";
    }
else
        if(r=='\0')
            cout<<endl<<"[ "<<Book_name_issue[1]<<" ] Book is already issue!!"<<endl;
}
else if(R=='\0')
    {
    cout<<endl<<endl<<"\n\t\t\t\t  Your are Not Register in Library.\n\n\n\t\t\t\t  If You want to Register Enter 1"<<endl;
    cout<<"\t\t\t\t\t\t ";
    cin>>R;
if(R==1)
    {
    cout<<endl<<"Enter Student name : ";
    cin>>Student_Registration[R];
    cout<<"Enter Student ID : ";
    cin>>Student_Registration_ID[R];
    cout<<endl<<endl<<"\n\t\t\t\t  Registration Done!!"<<endl<<endl;
    cout<<"Enter 1 for Register more Student  & any number For skip :";
    cin>>b;
    }
}}}
};
class return_book:public issue_book{
protected:
    char return_Book_name[100][15],return_Author[100][15],return_Book_ID[100][15];
    int Current_Month,Current_Day,Current_Year;
public:
    void return_book_input()
{
    cout<<"\n\n\t\t\t  ::::::::::::::::::::::: Return Book :::::::::::::::::"<<endl;
    cout<<endl<<endl<<"Enter Book Name for return book : ";
    cin>>return_Book_name[1];
    cout<<"Enter Book Writer name for return book  : ";
    cin>>return_Author[1];
    cout<<"Enter Book ID for return book :";
    cin>>return_Book_ID[1];

}
void match_book(){
for(int R=0;R<Num_of_Books;R++)
{
if(strcmp(return_Book_name[1],copy_Book_name[R])==0&&strcmp(return_Author[1],copy_Author[R])==0&&strcmp(return_Book_ID[1],copy_Book_ID[R])==0)
    {
        cout<<"Enter Current Date  : ";
        cin>>Current_Day;
        cout<<"Enter Current Month  : ";
        cin>>Current_Month;
        cout<<"Enter Current Year  : ";
        cin>>Current_Year;

        int issue_Day_min_Current_Day;
        int issue_Month_min_Current_Month;
        int issue_year_min_Current_year=Current_Year-issue_Year;

if(Current_Day>=issue_Date&&Current_Month>=issue_Month)
        {
        issue_Day_min_Current_Day=Current_Day-issue_Date;
        issue_Month_min_Current_Month=Current_Month-issue_Month;
        int Fine_per_day=issue_Day_min_Current_Day+(issue_Month_min_Current_Month*30);
        Fine_per_day*=5;
        cout<<"\n\t\t\t\t  You are not return on time, please pay "<<Fine_per_day<<" Fine";
        }
else
        cout<<"\n\t\t\t\t  You return the Book!! ";
    }
else
    if(R='\0')
    cout<<"\n\t\t\t\t  This is not Library book!!";
}
    }
};
class order_book:public return_book{
protected:
    char order_book_name[100][15],order_book_Aythor[100][15],order_book_ID[100][15];

public:
   void order_book_input(){
        cout<<"\n\n\t\t\t  ::::::::::::::::::::::: Order Book :::::::::::::::::"<<endl;
        cout<<"Enter Book Name for order Book : ";
        cin>>order_book_name[1];
        cout<<"Enter Author Name for order Book : ";
        cin>>order_book_Aythor[1];
        cout<<"Enter Book ID for order Book : ";
        cin>>order_book_ID[1];
    }

void Present_in_library(){
for(int r=0;r<=Num_of_Books;r++)
{
            if(strcmp(order_book_name[1],Book_name[r])==0&&strcmp(order_book_Aythor[1],Author[r])==0&&strcmp(order_book_ID[1],Book_ID[r])==0)
            cout<<"This book is already present in library so you will not order the book";
            else
                if(r=='\0')
            cout<<"\n\t\t\t\t  Now your book has order!!";
                }
    }

};
class Registration_student:public order_book{
protected:
   char Name_Registration_Again[100][15],ID_Registration_Again[100][15],Again_name_copy[25];
   int Again_name=0;
public:
        Registration_student_input(){

    cout<<"\n\t\t\t\t  Enter 1 for Student";
    cout<<"\n\t\t\t\t  Enter 2 for Teacher";
    cout<<"\n\t\t\t\t  If You want to exit Enter zero '0' "<<endl;
    cout<<"\t\t\t\t\t ";
    cin>>Again_name;
if(Again_name==0)
    {
        cout<<" \n\n\t\t\t  Thankful for coming in the library ";
        exit(0);
       }

    if(Again_name==1)
        strcpy(Again_name_copy,"Student");
    else if(Again_name==2)
        strcpy(Again_name_copy,"Teacher");

    cout<<"Enter "<<Again_name_copy<<" Name For Registration : ";
    cin>>Name_Registration_Again[1];
    cout<<"Enter "<<Again_name_copy<<" ID For Registration : ";
    cin>>ID_Registration_Again[1];

for(int R=0;R<=Num_of_Books;R++)
        {
if(strcmp(ID_Registration_Again[1],Student_Registration_ID[R])==0&&strcmp(Name_Registration_Again[1],Student_Registration[R])==0)
        cout<<"You are already register ";
else
        cout<<"Your registration is approved ";
        }
    }
};
void library(){

    Password p1;
if(password==111)
{
    Registration_student Book1;
    Book1.Delete();
    Book1.Update_Book();
    Book1.display_All_Dta();
    Book1.issue_book_input();
    Book1.return_book_input();
    Book1.match_book();
    Book1.order_book_input();
    Book1.Present_in_library();
    Book1.Registration_student_input();
    }

}
int main()
{
library();
    cout<<"\n\n\t\t\t\t ************** Shahzaib Yaqoob *****************"<<endl;


}
