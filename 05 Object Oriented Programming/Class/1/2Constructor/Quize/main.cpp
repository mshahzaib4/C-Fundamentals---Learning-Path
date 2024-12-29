#include <iostream>
#include <strings.h>
using namespace std;
int num;

///       <--_-_-_-_-_-_-_-_-_-_-_-_-_-_-_Start Password Class-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-->

class login
{
 private:
        char login2[10];int password;
 public:
     login(int password_Par)
        {
        cout<<"\n:::::::::::::::::::::::::: Enter Your Password and ID :::::::::::::::::::::::::: "<<endl<<endl;
        cout<<"::::::: Enter ID       : ";
        cin>>password;
        cout<<"::::::: Enter Password : ";
        cin>>login2;
        password_Par=password;
if(password==123 && strcmp(login2,"A1")==0)
{

        cout<<"\n\n::::::::::::::::::: DISPLAY RECORD INFORMATION FOR SELECTION :::::::::::::::::::"<<endl<<endl;
        cout<<"::::::: Enter 1: for Patient Record\n::::::: Enter 2: for Doctor Record\n:::::::";
        cout<<" Enter 3: for Inventory Record\n::::::: Enter 4: both Record"<<endl;
        int num1;
        cin>>num1;
        num=num1;
}
else
        cout<<"\n\n\n\t\t\t\t\t ::::::: You Enter Invalid :::::::"<<endl<<endl;
        }

 };

 ///       <--_-_-_-_-_-_-_-_-_-_-_-_-_-_-_End Password Class-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-->


class Patient_Record
{
    private:
    string name,Supervisor_name,Blood_group;
    long CNIC,Phone_number;
    string name1_2,Supervisor_name1_2,Blood_group1_2;
    long CNIC1_2,Phone_number1_2;
    public:
Patient_Record()
{
    cout<<"\n\n\t\t::::::::::::::::::::::::::: Enter Patient Record :::::::::::::::::::::::::::"<<endl<<endl;

    cout<<"Enter Patient Name         : ";
    cin>>name;
    cout<<"Enter Patient CNIC ID      : ";
    cin>>CNIC;
    cout<<"Enter Supervisor Name      : ";
    cin>>Supervisor_name;
    cout<<"Enter Patient Blood group  : ";
    cin>>Blood_group;
    cout<<"Enter Patient Phone number : ";
    cin>>Phone_number;
}
  dispaly()
  {

    cout<<"\n\n\t\t::::::::::::::::::::::::::: Display Patient Record :::::::::::::::::::::::::::"<<endl<<endl;
    cout<<"Patient Name         : "<<name<<endl;
    cout<<"Patient CNIC ID      : "<<CNIC<<endl;
    cout<<"Supervisor Name      : "<<Supervisor_name<<endl;
    cout<<"Patient Blood group  : "<<Blood_group<<endl;
    cout<<"Patient Phone number : "<<Phone_number<<endl;
}

Patient_Record(string name1,string Supervisor_name1,string Blood_group1,long CNIC1,long Phone_number1)
{
    cout<<"\n\n\t\t::::::::::::::::::::::::::: Enter New Patient Record :::::::::::::::::::::::::::"<<endl<<endl;

    cout<<"Enter New Patient Name         : ";
    cin>>name1;
    cout<<"Enter New Patient CNIC ID      : ";
    cin>>CNIC1;
    cout<<"Enter New Supervisor Name      : ";
    cin>>Supervisor_name1;
    cout<<"Enter New Patient Blood group  : ";
    cin>>Blood_group1;
    cout<<"Enter New Patient Phone number : ";
    cin>>Phone_number1;
    name1_2=name1;
    Supervisor_name1_2=Supervisor_name1;
    Blood_group1_2=Blood_group1;
    CNIC1_2=CNIC1;
    Phone_number1_2=Phone_number1;

}
dispaly_new(string name_pd,string Supervisor_name_pd,string Blood_group_pd,long CNIC_pd,long Phone_number_pd)
{

    cout<<"\n\n\t\t::::::::::::::::::::::::::: Display Update Patient Record :::::::::::::::::::::::::::"<<endl<<endl;

    cout<<"Patient New Name         : "<<name1_2<<endl;
    cout<<"Patient New CNIC ID      : "<<CNIC1_2<<endl;
    cout<<"Supervisor New Name      : "<<Supervisor_name1_2<<endl;
    cout<<"Patient New Blood group  : "<<Blood_group1_2<<endl;
    cout<<"Patient New Phone number : "<<Phone_number1_2<<endl;

}

};

///       <--_-_-_-_-_-_-_-_-_-_-_-_-_-_-_ step 2 -_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-->


///       <--_-_-_-_-_-_-_-_-_-_-_-_-_-_-_ Step 2 Doctor Record -_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-->


class Doctor_record
{
    private:
    string D_name,D_Specfication;
    long D_CNIC,D_Phone_number;
    int D_Exp;
public:
     Doctor_record()
     {
    cout<<"\n\n\t\t::::::::::::::::::::::::::: Enter Doctor Record :::::::::::::::::::::::::::"<<endl<<endl;
    cout<<"Enter Doctor Name          : ";
    cin>>D_name;
    cout<<"Enter Doctor ID            : ";
    cin>>D_CNIC;
    cout<<"Enter Doctor Experience    : ";
    cin>>D_Exp;
    cout<<"Enter Doctor Phone number  : ";
    cin>>D_Phone_number;
    cout<<"Enter Doctor Specification : ";
    cin>>D_Specfication;
    }
Doctor_dispaly()
  {

    cout<<"\n\n\t\t::::::::::::::::::::::::::: Display Doctor Record :::::::::::::::::::::::::::"<<endl<<endl;
    cout<<"Doctor Name            : "<<D_name<<endl;
    cout<<"Doctor CNIC ID         : "<<D_CNIC<<endl;
    cout<<"Doctor Experience      : "<<D_Exp<<endl;
    cout<<"Doctor Specification   : "<<D_Specfication<<endl;
    cout<<"Doctor Phone number    : "<<D_Phone_number<<endl;

}

Doctor_record(string D_name_in,string D_Specfication_in,long D_CNIC_in,long D_Phone_number_in,int D_Exp_in)
     {

    cout<<"\n\n\t\t::::::::::::::::::::::::::: Enter New Doctor Record :::::::::::::::::::::::::::"<<endl<<endl;
    cout<<"Enter New Doctor Name          : ";
    cin>>D_name_in;
    cout<<"Enter New Doctor ID            : ";
    cin>>D_CNIC_in;
    cout<<"Enter New Doctor Experience    : ";
    cin>>D_Exp_in;
    cout<<"Enter New Doctor Phone number  : ";
    cin>>D_Phone_number_in;
    cout<<"Enter New Doctor Specification : ";
    cin>>D_Specfication_in;
    D_name=D_name_in;
    D_CNIC=D_CNIC_in;
    D_Exp=D_Exp_in;
    D_Phone_number=D_Phone_number_in;
    D_Specfication=D_Specfication_in;

    }

New_Doctor_dispaly(string ND_name_in,string ND_Specfication_in,long ND_CNIC_in,long ND_Phone_number_in,int ND_Exp_in)
  {

    cout<<"\n\n\t\t::::::::::::::::::::::::::: Display New Doctor Record :::::::::::::::::::::::::::"<<endl<<endl;

    cout<<"Doctor New Name            : "<<D_name<<endl;
    cout<<"Doctor New CNIC ID         : "<<D_CNIC<<endl;
    cout<<"Doctor New Experience      : "<<D_Exp<<endl;
    cout<<"Doctor New Specification   : "<<D_Specfication<<endl;
    cout<<"Doctor New Phone number    : "<<D_Phone_number<<endl;

}

};

///       <--_-_-_-_-_-_-_-_-_-_-_-_-_-_-_Inventory Record-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-->

class inventory_record
{
    private:
        int total_inventory_items,Remaing_items,Destroy_items,used_items;
    public:
        inventory_record(){
        cout<<"\n\n\t\t::::::::::::::::::::::::::: Enter Inventory Record :::::::::::::::::::::::::::"<<endl<<endl;
        cout<<"Enter Total inventory Items  : ";
        cin>>total_inventory_items;                 // in=10;
        cout<<"Enter Remaining items Items  : ";
        cin>>Remaing_items;                        //  Re=8;
        cout<<"Enter Destroy items Items    : ";
        cin>>Destroy_items;                        // destroy=10-8=2;
        cout<<"Enter used items Items       : ";
        cin>>used_items;
        }

    display_inventory_record()
    {
        cout<<"\n\n\t\t::::::::::::::::::::::::::: Display Inventory Record :::::::::::::::::::::::::::"<<endl<<endl;
        cout<<"Total inventory Items  : "<<total_inventory_items<<endl;
        cout<<"Remaining items Items  : "<<Remaing_items<<endl;
        cout<<"Destroy items Items    : "<<Destroy_items<<endl;
        cout<<"Used items Items       : "<<used_items<<endl;

    }
inventory_record(int total_inventory_items_p, int Remaing_items_p, int Destroy_items_p ,int used_items_P)
{
        cout<<"\n\n\t\t::::::::::::::::::::::::::: Enter New Inventory Record :::::::::::::::::::::::::::"<<endl<<endl;
        cout<<"Enter New Total inventory Items  : ";
        cin>>total_inventory_items_p;
        cout<<"Enter New Remaining items Items  : ";
        cin>>Remaing_items_p;
        cout<<"Enter New Destroy items Items    : ";
        cin>>Destroy_items_p;
        cout<<"Enter New used items Items       : ";
        cin>>used_items_P;

        total_inventory_items=total_inventory_items_p;
        Remaing_items=Remaing_items_p;
        Destroy_items=Destroy_items_p;
        used_items=used_items_P;


        }

display_inventory_record(int total_inventory_items_p,int Remaing_items_p,int Destroy_items_p,int used_items_P)
    {

        cout<<"\n\n\t\t::::::::::::::::::::::::::: Display New Inventory Record :::::::::::::::::::::::::::"<<endl<<endl;
        cout<<"Total inventory Items  : "<<total_inventory_items<<endl;
        cout<<"Remaining items Items  : "<<Remaing_items<<endl;
        cout<<"Destroy items Items    : "<<Destroy_items<<endl;
        cout<<"Used items Items       : "<<used_items<<endl;
    }


};


        ///       <--_-_-_-_-_-_-_-_-_-_-_-_-_-_-_ Main Function-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-->


int main()
{
    ///*************************Start password Class *******************************//

    int password_Par;
    login pr(password_Par);

     ///*************************Start password Class *******************************///
     ///*************************Start and Call Patient_Record class*******************///

     string name1_2,Supervisor_name1,Blood_group1;long CNIC1,Phone_number1;
     string name_pd,Supervisor_name_pd,Blood_group_pd;long CNIC_pd,Phone_number_pd;
if(num==1)

   {
    Patient_Record Old_patient_record;
    Patient_Record Patient_Record1(name1_2,Supervisor_name1,Blood_group1,CNIC1,Phone_number1);

    Old_patient_record.dispaly();
    Patient_Record1.dispaly_new(name_pd,Supervisor_name_pd,Blood_group_pd,CNIC_pd,Phone_number_pd);
    }


     ///****************************End Patient_Record class**************************************///
    ///*************************Start and Call Doctor_Record class*******************************///


    string D_name_in,D_Specfication_in;
    long D_CNIC_in,D_Phone_number_in;
    int D_Exp_in;

    string ND_name_in,ND_Specfication_in;
    long ND_CNIC_in,ND_Phone_number_in;
    int ND_Exp_in;

  if(num==2)
    {


    Doctor_record Doctor_record_old;
    Doctor_record Doctor_record_new(D_name_in,D_Specfication_in,D_CNIC_in,D_Phone_number_in,D_Exp_in);

    Doctor_record_old.Doctor_dispaly();
    Doctor_record_new.New_Doctor_dispaly(ND_name_in,ND_Specfication_in,ND_CNIC_in,ND_Phone_number_in,ND_Exp_in);
  }


     ///****************************End Doctor_Record class**************************************
    ///****************************start Inventory Record class**************************************///


    int total_inventory_items_p,Remaing_items_p,Destroy_items_p ,used_items_P;
    int total_inventory_items,Remaing_items,Destroy_items,used_items;
if(num==3)
  {

    inventory_record   inventory_record1 ;
    inventory_record new_inventory_record1(total_inventory_items_p,Remaing_items_p,Destroy_items_p,used_items_P);

    inventory_record1.display_inventory_record();
    new_inventory_record1.display_inventory_record(total_inventory_items_p,Remaing_items_p,Destroy_items_p,used_items_P);

  }

        ///************************* End Inventory Record class *********************///


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    ///************************* Patient_Record class *******************************///
    ///**************************** Doctor_Record class *******************************///
    ///**************************** Inventory Record class ******************************///

if(num==4)
    {

     Patient_Record Old_patient_record;
     Patient_Record Patient_Record1(name1_2,Supervisor_name1,Blood_group1,CNIC1,Phone_number1);
     Old_patient_record.dispaly();
     Patient_Record1.dispaly_new(name_pd,Supervisor_name_pd,Blood_group_pd,CNIC_pd,Phone_number_pd);

     Doctor_record Doctor_record_old;
     Doctor_record Doctor_record_new(D_name_in,D_Specfication_in,D_CNIC_in,D_Phone_number_in,D_Exp_in);
     Doctor_record_old.Doctor_dispaly();
     Doctor_record_new.New_Doctor_dispaly(ND_name_in,ND_Specfication_in,ND_CNIC_in,ND_Phone_number_in,ND_Exp_in);


     inventory_record   inventory_record1 ;
     inventory_record new_inventory_record1(total_inventory_items_p,Remaing_items_p,Destroy_items_p,used_items_P);
     inventory_record1.display_inventory_record();
     new_inventory_record1.display_inventory_record(total_inventory_items_p,Remaing_items_p,Destroy_items_p,used_items_P);
}
}
