#include <iostream>
#include <string.h>
using namespace std;
class BOOK
{

private:
    int BookID;
    int Price;
    int page;
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
         cout<<"Book Name = "<<Price<<endl;
         cout<<"Book Page= "<<page<<endl;

    }

void set_value(int id,int pr,int pg)
    {
         BookID=id;
         Price=pr;
         page=pg;
    }
};
 main()
{
   BOOK B1,B2,B3;
   B2.get();
   B3.get();
   B2.show();
   B3.show();
   B2.set_value(60,5000,600);
   B3.set_value(70,3000,200);
   cout<<"\t\t\t::::::::::After Checking List::::::::::"<<endl;
   B2.show();
   B3.show();


}
