#include <iostream>
#include<string.h>
using namespace std;
class Vehicle{
public:
Vehicle(){
cout<<"\n\n\n\t\t\t|--------------------------|"<<endl;
cout<<"\t\t\t| |"<<endl;
cout<<"\t\t\t| Available |"<<endl;
cout<<"\t\t\t| |"<<endl;
cout<<"\t\t\t|--------------------------|"<<endl;
cout<<"\n\n\t\t\t|--------------------------|"<<endl;
cout<<"\t\t\t| |"<<endl;
cout<<"\t\t\t| Car |"<<endl;
cout<<"\t\t\t| |"<<endl;
cout<<"\t\t\t|--------------------------|"<<endl;
cout<<"\t\t\t|--------------------------|"<<endl;
cout<<"\t\t\t| Audi 12Million /- |"<<endl;
cout<<"\t\t\t|--------------------------|"<<endl;
cout<<"\t\t\t|--------------------------|"<<endl;
cout<<"\t\t\t| Ford 14Million /- |"<<endl;
cout<<"\t\t\t|--------------------------|"<<endl;
cout<<"\n\n\n\t\t\t|--------------------------|"<<endl;
cout<<"\t\t\t| |"<<endl;
cout<<"\t\t\t| Bike |"<<endl;
cout<<"\t\t\t| |"<<endl;
cout<<"\t\t\t|--------------------------|"<<endl;
cout<<"\t\t\t|--------------------------|"<<endl;
cout<<"\t\t\t| Yamaha 3.5Lhak /- |"<<endl;
cout<<"\t\t\t|--------------------------|"<<endl;
cout<<"\t\t\t|--------------------------|"<<endl;
cout<<"\t\t\t| Suzuki 4.7Lhak /- |"<<endl;
cout<<"\t\t\t|--------------------------|"<<endl<<endl<<endl;
}
};
class Car:Vehicle{
protected:
int ownership_cost,warranty,seating_capacity;
char fuel_type[10];
public:
Car()
{
cout<<"Enter fuel type (diesel or petrol) : ";
cin.getline(fuel_type,10);
cout<<"Enter Seating Capacity : ";
cin>>seating_capacity;
cout<<"Enter Ownership Cost : ";
cin>>ownership_cost;
cout<<"Enter warranty : ";
cin>>warranty;
}
};
class Audi:Car{
protected:
int model;
public:
Audi():Car(){
cout<<"Enter Model of Audi : ";
cin>>model;
}
void Audi_Display();
};
class Ford_car:Car{
protected:
int model2;
public:
Ford_car():Car(){
cout<<"Enter Model of Ford Car ";
cin>>model2;
}
void Ford_Display();
} ;
void Audi::Audi_Display(){
cout<<endl<<endl<<"Fuel type (diesel or petrol) : "<<fuel_type<<endl;
cout<<"Seating Capacity : "<<seating_capacity<<endl;
cout<<"Ownership Cost : "<<ownership_cost<<endl;
cout<<"Warranty : "<<warranty<<endl;
cout<<"Model : "<<model;
}
void Ford_car::Ford_Display(){
cout<<endl<<endl<<"Ford Car"<<endl;
cout<<"Fuel type (diesel or petrol) : "<<fuel_type<<endl;
cout<<"Seating Capacity : "<<seating_capacity<<endl;
cout<<"Ownership Cost : "<<ownership_cost<<endl;
cout<<"Warranty : "<<warranty<<endl;
cout<<"Model : "<<model2;
}
class Bike:Vehicle{
protected:
int cylinders,gears;
char cooling_type[10],wheel_type[10];
float tank_size;
public:
Bike():Vehicle()
{
cout<<"Enter cooling type(air, liquid or oil) : ";
cin.getline(cooling_type,10);
cout<<"Enter wheel type(alloys or spokes) : ";
cin.getline(wheel_type,10);
cout<<"Enter who many Cylinders in bike : ";
cin>>cylinders;
cout<<"Enter number of Gears : ";
cin>>gears;
cout<<"Enter fuel tank size(in inches) : ";
cin>>tank_size;
}
};
class Yamaha :Bike{
protected:
int yamaha ;
public:
Yamaha ():Bike(){
cout<<"Enter Model of Yamaha : ";
cin>>yamaha ;
}
void Yamaha_Display();
};
class Suzuki:Bike{
protected:
int suzuki;
public:
Suzuki():Bike(){
cout<<"Enter Model of Ford Car ";
cin>>suzuki;
}
void Suzuki_Display();
} ;
void Yamaha::Yamaha_Display(){
cout<<endl<<endl<<"Yamaha Bike"<<endl;
cout<<"Model of Yamaha : "<<yamaha<<endl;
cout<<"Cooling type : "<<cooling_type<<endl;
cout<<"Wheel type : "<<wheel_type<<endl;
cout<<"Cylinders in bike : "<<cylinders<<endl;
cout<<"Number of Gears : "<<gears<<endl;
cout<<"Fuel tank size(in inches) : "<<tank_size<<endl;
}
void Suzuki::Suzuki_Display(){
cout<<endl<<endl<<"Suzuki Bike"<<endl;
cout<<"Model of Yamaha : "<<suzuki<<endl;
cout<<"Cooling type : "<<cooling_type<<endl;
cout<<"Wheel type : "<<wheel_type<<endl;
cout<<"Cylinders in bike : "<<cylinders<<endl;
cout<<"Number of Gears : "<<gears<<endl;
cout<<"Fuel tank size(in inches) : "<<tank_size<<endl;
}
int main()
{
Audi Car1;
Ford_car Car2;
Car1.Audi_Display();
Car2.Ford_Display();
cout<<endl<<endl;
Yamaha Bike1;
Suzuki Bike2;
Bike1.Yamaha_Display();
Bike2.Suzuki_Display();
}
