#include<iostream>
using namespace std;
class array1{
   private:
    int array_[5],temp;
    public:
       void input_array();
       void array1_display();
       void sort_array();
       void min_array();
       void max_array();
};
void array1::input_array(){
    for(int b=0;b<=4;b++)
       {cout<<"Enter Array :";
        cin>>array_[b];
        }
}

void array1::array1_display(){
      cout<<"\n::::::::::::::: Display Array :::::::::::::::\n\nYou Enter Array is:{ ";
    for(int b=0;b<=4;b++)
       cout<<" "<<array_[b]<<" ";
       cout<<" }";
}

void array1::sort_array(){

        for(int a=0;a<=4;a++);
        {
            for(int b=0;b<=4;b++)
            if(array_[b]>array_[b+1])
            {
                temp=array_[b];
                array_[b]=array_[b+1];
                array_[b+1]=temp;
            }
        }
       }

void array1::min_array(){

          cout<<"\n::::::::::::::: Display Array :::::::::::::::\n ";


    cout<<"\nMinimum Value of the Array is :"<<array_[0];
}
void array1::max_array(){

    cout<<"\nMaximum Value of the Array is :"<<array_[4]<<endl<<endl;
}

main()
{
    array1 a;
    a.input_array();
    a.array1_display();
    a.sort_array();
    a.min_array();
    a.max_array();
}
