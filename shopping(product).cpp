#include<iostream>
using namespace std;
class Product{
     private:
          int prodid,fb;
         char pname[10],cname[50];
          float pprice,cgst,sgst;
          int qty;
         float tot;
    public:
         void acc()
        {
              cout<<"\nenter product id...";
              cin>>prodid;
              cout<<"\nenter product name....";
               cin>>pname;
            cout<<"\nenter customer name.....";
            cin>>cname;
             cout<<"\nenter product price...";
              cin>>pprice;
            cout<<"\nenter product quantity...";
            cin>>qty;
        }
        void cal()
        {
            tot=pprice*qty;
            cgst=tot*0.06;
            sgst=tot*0.06;
            fb=tot+cgst+sgst;
        }
        void dis()
        {
           cout<<"\n==============ur details================\n";
             cout<<"\nproduct id  "<<prodid;
            cout<<"\ncustomer name "<<cname;
            cout<<"\nproduct name "<<pname;
            cout<<"\nproduct price "<<pprice;
            cout<<"\nproduct quantity "<<qty;
            cout<<"\ntotal bill(including cgst and sgst)"<<tot<<"rs\t"<<cgst<<"%\t"<<sgst<<"%\t";
            cout<<"\n===========finalbill========\n";
            cout<<fb<<"/- rs.only";
            cout<<"\n======Visit again==============\n";
           // cout<<"\n=================================";
             
        }
        
};


int main()
{
    Product pobj1,pobj2;
    cout<<"\nSize of product is"<<sizeof(pobj1);
    pobj1.acc();
    pobj2.acc();
    pobj1.cal();
    pobj2.cal();
    pobj1.dis();
    pobj2.dis();

    return 0;
}