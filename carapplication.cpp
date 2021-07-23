#include<iostream>
using namespace std;
class car
{
   public:
    int price;
    char carname[10];
    char ac[10];
    char fuel[10];
    public:
     void accept()
    {
        cout<<"\nEnter the car name";
        cin>>carname;
        cout<<"\nEnter fuel type";
        cin>>fuel;
        cout<<"\nEnter price";
        cin>>price;
        cout<<"\nEnter AC/Non AC";
        cin>>ac;
    }
    void display()
    {
       cout<<"\n=========car details========";
      cout<<"\ncar name:"<<carname;
        cout<<"\nFuel type:"<<fuel;
        cout<<"\nprice:"<<price;
        cout<<"\nAC/Non AC:"<<ac;
    }
};
class small:public car
{
    public:
      void ss()
     {
        accept();
        display();
      }
      void sf()
    {
        cout<<"\nHatchbacks feature a rear door the opens upward\n";
        cout<<"\nrear suspension designed for increased load capacity or to minimize intrusion into the cargo area\n";
        cout<<"\ntailgate is more likely to be a multi-part design or extend all the way down to the bumper\n";
        cout<<"\na third row of seats\n";
    }
};
class medium:public car
{
     public:
      void ms()
    {
        accept();
        display();
       }
        void mf()
        {
        cout<<"\n==WELCOME TO MEDIUM CARS SECTION==";
        cout<<"\nRear Defogger";
        cout<<"\nISOFIX Mounts";
        cout<<"\nAnti-lock Braking System";
        cout<<"\nDual Front Airbags";
        }
     
};
class luxury:public small,public medium
{
    public:
      void ls()
    {
     cout<<"\nLUXURY CAR....";
    }
};
int main()
{
   int ch;
  do{
    cout<<"\n1.SMALL CARS\n2.MEDIUM CARS\n3.LUXURY CARS";
     cout<<"\nEnter ur choice...";
      cin>>ch;
      if(ch==1)
    {
      small s;
     s.ss();
      s.sf();
    
    }
    if(ch==2)
    {
         medium m;
        m.ms();
       m.mf();
    }
    if(ch==3)
    {
       luxury l;
      l.ss();
      l.sf();
      l.mf();
      l.ls();
   }
    cout<<"\nDo u want to continue press 1..";
    cin>>ch;
}while(ch==1);
    return 0;
}