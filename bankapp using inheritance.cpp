#include<iostream>
using namespace std;
class account
{
    private:
        int accno;
        char bname[20];
        char cname[20];
      public:
      void accept()
    {
        cout<<"\n=======Account section=======";
        cout<<"\nEnter account no.";
        cin>>accno;
        cout<<"\nEnter customer name..";
        cin>>cname;
        cout<<"\nEnter bank name";
        cin>>bname;
    }
    void display()
    {
    cout<<"\n=======Account details=======";
        cout<<"\nAccount no-"<<accno;
        cout<<"\nCustomer name-"<<cname;
        cout<<"\nBank name-"<<bname;
    }
 };
class fd:public account
{
    private:
      int fdamt;
    public:
    void fdacc()
    {
          accept();
         cout<<"\nEnter amount to fixed deposite...";
        cin>>fdamt;
     }
    void fddis()
    {
         display();
        cout<<"\nUr fd is ready..."<<fdamt<<"/-";
    }
};
class savings:public account
{
   private:
    int currentbal,ch;
    int wdamt,depamt;
   public:
   void saveacc()
   {
      accept();
       cout<<"\nplease enter current balance..";
       cin>>currentbal;
       cout<<"\n1.withdrawal\n2.deposite";
        cin>>ch;
       switch(ch)
      {
           case 1:
            cout<<"\nenter amt to withdrwal..";
            cin>>wdamt;
            currentbal=currentbal-wdamt;
            break;
          case 2:
           cout<<"\nenter amt to deposite";
           cin>>depamt;
          currentbal=currentbal+depamt;
          break;
        default:
          cout<<"\ninvalid";
      }
   }
   void savedis()
    {
         display();
         cout<<"\ncurrentbalance is..."<<currentbal;
    }
   
};
class loan:public account
{
    private:
      int lamt;
    public:
      void loanacc()
    {
          accept();
          cout<<"\nEnter the amount for loan..";
          cin>>lamt;
    }
    void loandis()
    {
         display();
         cout<<"\nYou have entered loan amount is:\n"<<lamt<<"/-only";
         cout<<"\nLoan is in process..";
    }
};
int main()
{
   //account a;
   int ch;
  fd f;
  savings s;
  loan l;
   cout<<"\n============welcome=========";
  do
    {
        cout<<"\n1.Fixed Deposite\n2.Savings\n3.Loan";
        cout<<"\n===============";
        cout<<"\nenter ur choice";
        cin>>ch;
        switch(ch)
        {
            case 1:
            cout<<"\nWelcome to Fixed deposite section..";
            f.fdacc();
            f.fddis();
            break;
            case 2:
            cout<<"\nWelcome to Saving section";
            s.saveacc();
            s.savedis();
            break;
            case 3:
            cout<<"\nWelcome to loan section";
            l.loanacc();
            l.loandis();
            break;
            default:
            cout<<"\ninvalid..";
        }
      cout<<"\ndo u want to continue press 1..";
      cin>>ch;
    }while(ch==1);
    cout<<"\n\tThank u....";
    return 0;
}