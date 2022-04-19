// PF Project.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include<string>
using namespace std;
void main()
{

string nic_num;
int n;
int hours;
int car_price,vip_price;
int motor_price;
int rickshaw_price;
int bus_price;
char name[15];
char fname[15];
string vehi,car_num;

cout<<"Welcome to the car parking system program"<<endl;
cout<<"Please Enter the Required Informations for car parking"<<endl;
cout<<"_______________________________________"<<endl;
cout<<"Enter the Name : ";
cin>>name;
cout<<"Enter the Father Name : ";
cin>>fname;
cout<<endl<<"Please enter the your CNIC Number :"<<endl;
cin>>nic_num;
cout<<" Enter the Type of Vehicle : "<<endl;
cin>>vehi;
cout<<" Enter Vehicle Number :"<<endl;
cin>>car_num;
cout<<" For how many hours  you want to park your vehicle : "<<endl;
cin>>hours;
cout<<"..................Prices Details............"<<endl;
cout<<"1 Price of Car per hour is : 50"<<endl;
cout<<"2 Price of Bike per hour is : 20"<<endl;
cout<<"3 Price of Bus  per hour is :100"<<endl;
cout<<"4 Price of VIP Car per hour is :200"<<endl;
cout<< " Enter Option :"<<endl;
cin>>n;
cout<<"................................";
cout<<endl<<endl<<".....R.E.C.I.P.T....."<<endl;
cout<<endl<<endl;
switch (n)
{
case 1:
{
cout<<"You have parked your car for" <<hours<<"hours"<<endl;
car_price=50*hours;
cout<< "Your total price is :"<<car_price<<endl;

break;
}


case 2:
{
	cout<<"You have parked your bike for" <<hours<<"hours"<<endl;
motor_price=20*hours;
cout<< "Your total price is :"<<motor_price<<endl;

break;
}

case 3:
{
cout<<"You have parked your bus for" <<hours<<"hours"<<endl;
bus_price=100*hours;
cout<< "Your total price is :"<<bus_price<<endl;
break;
}
case 4:
{
	cout<< "You have parked your car for"<<hours<<"hours"<<endl;
	vip_price=200*hours;
	cout<< "Your total price is :"<<vip_price<<endl;
	break;
}

default:
{
cout<<"Not Correct Option Entered "<<endl<<"try agian"<<endl;
break;
}

}



cout<<endl<<"Your Name is ="<<name;
cout<<endl<<"Your Father name is ="<<fname<<endl;
cout<<"Your CNic number is = "<<nic_num<<endl;
cout<<"You have Entered for "<<hours<<"hours"<<endl;
cout<<"Your Vehicle type is :"<<vehi<<endl;
cout<<"Your Vehicle Number is : "<<car_num<<endl;
cout<<"-----------------------------------------"<<endl;
cout<<"thank you for using our parking service"<<endl;
cout<<"-----------------------------------------"<<endl;

system("pause");

}




