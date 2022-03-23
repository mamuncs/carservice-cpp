
#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
class coustomarInfo{
public:
 string name;
 string addr;
 double phone;
 //coustomar service input data...

 void input(string n,string a,double pn){
     name=n;
     addr=a;
     phone=pn;
 }
 void display1(){
     //show coustomar info
     cout<<"Name: "<<name<<endl;
     cout<<"Address: "<<addr<<endl;
     cout<<"phone number:"<<phone<<endl;
 }
};
class Repairing:public coustomarInfo{
 //this is inherited coustomar info
public:
 string carName;
 string carModel;
 int cost;
void input1(string cName,string cModel,int c){
     carName=cName;
     carModel=cModel;
     cost=c;
}
void display2(){
     //i want to inherit coustomar info here..........
     ///display1();
     cout<<"CarName : "<<carName<<endl;
     cout<<"CarModel: "<<carModel<<endl;
     cout<<"Repairing Cost: "<<cost<<endl;
}
};
class SalesPart:public Repairing {
public:
 string carModel;
 string AccesName;
 double cost;
 void input3(string ca,string acn,double cst){
     carModel=ca;
     AccesName=acn;
     cost=cst;
 }
 void display3(){
     cout<<"CarModel: "<<carModel<<endl;
     cout<<"Component: "<<AccesName<<endl;
     cout<<"Buy cost: "<<cost<<endl;
 }
};
class Delivery:public coustomarInfo{
public:
 string delTime;
 void input4(string dtime){
    delTime=dtime;
 }
 void display4(){
    cout<<delTime<<endl;
 }
};
int main(){
     cout<<"\tMAMUN CAR SERVICE CENTER"<<endl;
     cout<<"\t........................";
     cout<<endl;
     printf("\n");
     cout<<"<Main Menu> choose option"<<endl;
     cout<<"\t1. Registration / Login"<<endl;
     cout<<"\t2. Overview our service"<<endl;
     int choice;
     cout<<"Enter Option:";
     cin>>choice;
     string name;
     double phone;
     ///CLASS AND OBJECT...info
     coustomarInfo ob1;
     // ob1.input("kamon","kalia",122222);
     ///ob1.display1();
     Repairing ob2;
     ob2.input1("Toytota","Mx2055",10000);
     /// ob2.display2();
     SalesPart ob3;
     ob3.input3("Acar","ispandel",2000);
     /// ob3.display3();
     Delivery ob4;
     ob4.input4("Tomorow: 10.00pm");
     ///ob4.display4();
     string n,adr;
     double phn;
     switch(choice){
     case 1:
         cout<<"Enter name:";
         cin>>n;
         cout<<"Address:";
         cin>>adr;
         cout<<"Enter phone:";
         cin>>phn;
         ob1.input(n,adr,phn);
         cout<<"Login and registration succesfully...\n";
         printf("\n");
         ///After login menu option..........................
         ///ob1.display1();
         int ch;
         cout<<"MENU"<<endl;
         cout<<"\t 1.Repairing"<<endl;
         cout<<"\t 2.Boking"<<endl;
         cout<<"\t 3.Delivery"<<endl;
         cout<<"\t 4.Buy parts"<<endl;
         cout<<"\t 5. Logout"<<endl;
         cout<<"Enter choice:";
         cin>>ch;
     ///this is nested switch statement......
     switch(ch){
     case 1:
     ob1.display1();
     //coustomar info..
     ob2.input1("Toytota","Mx2055",10000);
     ob2.display2();
     break;
     case 2:
     cout<<"Enter boking info"<<endl;
     cout<<"................"<<endl;
     ob2.display2();
     break;
     case 3:
        cout<<"Delivery info"<<endl;
        cout<<".............."<<endl;
     //.....................................................
     //ob2.input1("Toytota","Mx2055",10000);
        cout<<"coustomar Name: "<<n<<endl;
        cout<<"coustomar Address: "<<adr<<endl;
        ob4.input4("Delivaray time: tomorrow-110.00pm");
        ob4.display4();
     break;
     case 4:
        cout<<"Parts buy info"<<endl;
        cout<<".............."<<endl;
     // ob3.input3("Acar","ispandel",2000);
     ob3.display3();
     case 5:
        cout<<"Thanks visit our service center"<<endl;
     break;
     default:
        cout<<"Go to main Main Menu"<<endl;
     }
     break;
     case 2:
        cout<<"Our service center..."<<endl;
        cout<<"This is bigest cervice center in our Area."<<endl;
     break;
     default:
     cout<<"Go to Main Menu";
     }
     /// coustomarInfo ob1;
     ///ob1.input("kamon","kalia",122222);
     ///ob1.display1();
     ///Repairing ob2;
     ///ob2.input1("Toytota","Mx2055",10000);
     /// ob2.display2();
     /// SalesPart ob3;
     /// ob3.input3("Acar","ispandel",2000);
     /// ob3.display3();
     /// Delivery ob4;
     ///ob4.input4("10.00 pm");
     ///ob4.display4();
 return 0;
}

