#include<iostream>
using namespace std;
class logics
{
      public:
       void factor(int);
        int factorial(int);
        bool prime(int);
        int power(int,int);
        int sumofdigit(int);
        void reverse(int);
};
class arrayoperation
{
     public:
     // int[] create;
      void display(int arr[]);
     void search(int arr[],int);
      void sort(int arr[]);
    void minmax(int arr[]);
    void insert(int arr[]);
    void delet(int arr[]);
   
};
class stringoperation
{
     public:
         void concate();
          void copy();
          void length();
};
void logics::factor(int n)
{
   int i=1;
   while(i<=n)
     {
          if(n%i==0)
          {
            cout<<i<<"\t";
          }
        i++;
     }
}
int logics::factorial(int n)
{
     int ans=1,i=2;
      while(i<=n)
    {
        ans=ans*i;
        i++;
    }
     return ans;
}
bool logics::prime(int n)
{
      bool b=true;
     int i;
      for(i=2;i<n/2;i++)
    {
        if(n%i==0)
        {
            b=false;
            break;
        }
    }
    return b;
}
int logics::sumofdigit(int n)
{
     int sum=0,r;
      do{
        r=n%10;
        sum=sum+r;
        n=n/10;
    }while(n!=0);
    return sum;
}
void logics::reverse(int n)
{
    int i,r;
    do
    {
        r=n%10;
        cout<<r;
        n=n/10;
    }while(n!=0);
}
void arrayoperation::display(int arr[])
{
       int i,n;
      cout<<"\nelements in array are.";
      for(i=0;i<5;i++)
       {
          cout<<"\n"<<arr[i];
       }
}
void arrayoperation::search(int arr[],int e)
 {
    int flag=0,i;
   for(i=0;i<5;i++)
   { 
           if(arr[i]==e)
             {
                flag=1;
               break;
            }
   }
  if(flag==1)
   cout<<"ur no "<<e<<" found at location "<<(i+1);
   else 
cout<<"not found...";
}
void arrayoperation::sort(int arr[])
{
     int i,j,tmp;
     for(i=0;i<5;i++)
     {
        for(j=i+1;j<5;j++)
        {
            if(arr[i]>arr[j])
            {
                 tmp=arr[i];
                arr[i]=arr[j];
                arr[j]=tmp;
            }
        }
    }
    cout<<"sorted list is";
    for(i=0;i<5;i++)
     {
         cout<<"\n"<<arr[i];
    }
  
}
void arrayoperation::minmax(int arr[])
{
   int min,max;
     min=arr[0];
     max=arr[0];
     for(int i=0;i<5;i++)
    {
          if(arr[i]<min)
           {
             min=arr[i];
           }
         else if(arr[i]>max)
        {
              max=arr[i];
        }
    }
    cout<<"\ngreater no is:"<<max;
    cout<<"\nsmaller no is:"<<min;
}
void arrayoperation::insert(int arr[])
{
       int pos,ele,i;
       cout<<"\nenter element and its position..";
       cin>>ele>>pos;
    if(pos>5)
    {
        cout<<"array contain 5 elements only..check ur position";
    }
      for(i=4;i>=pos-1;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[i+1]=ele;
    arr[i++];
}
void arrayoperation::delet(int arr[])
{
       int pos,i,ele;
      cout<<"\nenter position to delete theres value.";
      cin>>pos;
       ele=arr[pos-1];
        for( i=pos-1;i<4;i++)
        {
             arr[i]=arr[i+1];
        }
        arr[i--];
}
void stringoperation::concate()
{
       int i,l=0,j;
       char str1[10],str2[10];
       cout<<"\nenter string 1";
        cin>>str1;
       cout<<"\nenter string 2";
        cin>>str2;
       for(i=0;str1[i]!='\0';i++)
    {
        l++;
    }
    for(j=0,i=l;str2[j]!='\0';j++,i++)
    {
         str1[i]=str2[j];
    }
    str1[i]='\0';
    cout<<"\nAfter concate ur string is:\n"<<str1;
}
void stringoperation::copy()
{
     char str1[10],str2[10];
       int i,j;
    cout<<"\nenter string 1";
        cin>>str1;
       cout<<"\nenter string 2";
        cin>>str2;
        for(j=0,i=0;str2[j]!='\0';j++,i++)
        {
            str1[i]=str2[j];
        }
        str1[i]='\0';
        cout<<"\nAfter copy string 1 is"<<str1;
        cout<<"\nAfter copy string 2 is"<<str2;
}
void stringoperation::length()
{
    char str1[10];
    int cnt=0,i;
    cout<<"\nenter any string..";
    cin>>str1;
    for(i=0;str1[i]!='\0';i++)
    {
        cnt++;
    }
    cout<<"length of ur string is"<<cnt;
   
}
int main()
{
    logics l;
    arrayoperation ap;
    stringoperation sr;
    bool b;
    int ch,n,sum=0,ans=1,arr[5],e,p1;
    //int l=0,i,j;
    char str1[10],str2[10];
   // int ele,pos;
    cout<<"\n============================";
    cout<<"\n1.Logic\n2.Array operations\n3.string";
    cout<<"\n==========================";
    cout<<"\nEnter ur choice..";
    cout<<"\n===========================";
    cin>>ch;
      if(ch==1)
    {
    do
        {
        cout<<"\n---------Logics--------\n";
        cout<<"\n1.Factor\n2.factorial\n3.primeno\n4.sum of digits\n5.reverse the digits";
       cout<<"\n============================";
         cout<<"\nEnter your choice....";
        cout<<"\n===================\n";
        cin>>ch;
        switch(ch)
        {
             case 1:
              cout<<"\nEnter no..";
              cin>>n;
              l.factor(n);
             break;
            case 2:
       cout<<"\nEnter a Number to Find Factorial";
       cin>>n;
      l.factorial(n);
        cout<<"\nThe Factorial of :"<<n<<"\n"<<l.factorial(n);
            break;
              case 3:
              cout<<"\nenter no to find prime or not..";
              cin>>n;
               b=l.prime(n);
            if(b)
            cout<<"\nprime no..";
            else
            cout<<"\nno prime";
            break;
            case 4:
               cout<<"\nenter no..";
              cin>>n;
            sum=l.sumofdigit(n);
            cout<<"sum of"<<n<<"no is.."<<sum;
            break;
            case 5:
            cout<<"\nenter no to reverse..";
            cin>>n;
            l.reverse(n);
            break;
            default:
            cout<<"\nplz select correct option..";
            cout<<"\n invalid..";
        }
        cout<<"\ndo u want to continue press 1...";
        cin>>ch;
    }while(ch==1);
    cout<<"=========Thank u========";
   }//end of ifch==1
    else if(ch==2)
    {
      // int i,n,arr[50];
       do
    {
       cout<<"\n------array operations--------";
       cout<<"\n1.create\n2.display\n3.search\n4.sort\n5.greater and smaller no\n6.insert";
       cout<<"\n===================";
    cout<<"\nenter ur choice..";
      cin>>ch;
        switch(ch)
        {
             case 1:
                 cout<<"\nenter 5 nos";
            for(int i=0;i<5;i++)
            {
                 cin>>arr[i];
            }
              break;
            case 2:
           // cout<<"elements are..";
              ap.display(arr);
            break;
            case 3:
            cout<<"enter element to search in array..";
            cin>>e;
            ap.search(arr,e);
               break;
            case 4:
            ap.sort(arr);
            break;
            case 5:
            ap.minmax(arr);
            break;
            case 6:
           /* cout<<"\nEnter element & position to insert..in array";
            cin>>ele>>pos;*/
             ap.insert(arr);
            break;
            case 7:
             ap.delet(arr);
            break;
            default:
            cout<<"\ninvalid..";
        }
        cout<<"\ndo u want to continue..press 2";
        cin>>ch;
     }while(ch==2);
    cout<<"\n======thank u======";
    }
    else if(ch==3)
    {
         do
        {
            cout<<"\n1.concate\n2.copy\n3.length";
            cout<<"\nEnter ur choice...";
            cin>>ch;
            switch(ch)
            {
                case 1:
               sr.concate();
                   break;
            case 2:
              sr.copy();
             break;
            case 3:
            sr.length();
            break;
            default:
            cout<<"\ninvalid..";
                 
            }
            cout<<"\ndo u want to continue press 3";
            cin>>ch;
        }while(ch==3);
       cout<<"\n=======Thank u========";
    }
    
    return 0;
}