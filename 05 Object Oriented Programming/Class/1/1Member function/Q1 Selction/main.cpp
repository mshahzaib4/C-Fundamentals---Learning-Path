#include <iostream>
#include <string.h>
using namespace std;
class BOOK
{

private:
    int BookID;
    int Price;
    int page,a;
public:
    void get()
    {   cout<<"\t\t\t:::::::::::::::Please enter data for record::::::::::::"<<endl;
        cout<<"Enter Book ID =";
        cin>>BookID;
        cout<<"Enter Book price =";
        cin>>Price;
        cout<<"Enter Book Page =";
        cin>>page;
    }
    void show()
    {
         cout<<"\t\t\t:::::::::::::::DISPLAY DATA::::::::::::"<<endl;
         cout<<"Book ID = "<<BookID<<endl;
         cout<<"Book Price = "<<Price<<endl;
         cout<<"Book Page= "<<page<<endl;

    }

void set_value(int id,int pr,int pg)
    {
         cout<<"\n\nPress 1 to Change Book ID.\nPress 2 to Change Price.\nPress 3 to enter  New Page.\nSelect Option : : ";
         cin>>a;
if(a==1)
         {cout<<"Enter New ID : ";
         cin>>id;
         }
else if(a==2)
         {cout<<"Enter New Price ID : ";
         cin>>pr;
         }
else if(a==3)
         {cout<<"Enter New Page : ";
         cin>>pg;
         }
         BookID=id;
         Price=pr;
         page=pg;
         cout<<BookID;
    }
};
 main()
{
   int a1,p1,p2;
   BOOK B1,B2,B3;
   B2.get();
   B2.show();
   B2.set_value(a1,p1,p2);
   cout<<"\t\t\t::::::::::After Checking List::::::::::"<<endl;
   B2.show();
}
