#include<stdio.h>
#define max 100
struct cust
{
   int id;
   char name[50];
   int accno;
   int abal;
};
int main()
{
   struct cust c[max];
   struct cust c1;
   struct cust temp;
   int ch,n,i,pos,j;
   int wid,dep,fb1,fb2,ano,ch1,bal,bal1;
   int flag=0;
   printf("\n\t\t\t\t\tBANK MANAGEMENT SYSTEM..");
   do
   {
  		printf("\n\n\n\t\t\t\t\t1.Accept account holders details\n\t\t\t\t\t2.Display account holders details\n\t\t\t\t\t3.insert more account holders details\n\t\t\t\t\t4.Sort data by account balance\n\t\t\t\t\t5.Delete the data\n\t\t\t\t\t6.Search data");
 		printf("\n\t\t\t\t\t---------------------------------------------");
		printf("\n\t\t\t\t\tEnter Your Choice : ");
		printf("\n\t\t\t\t\t---------------------------------------------\n\n\t\t\t\t\t");
 		scanf("%d",&ch);
  		switch(ch)
		{ 
 			case 1:
 				//Accept account holders details
  				printf("\n\t\t\t\t\tHow many accounts do u want..? : \n\n\t\t\t\t\t");
				scanf("%d",&n);
				printf("\n\t\t\t\t\tEnter details for %d accounts : \n",n);
 				for(i=0;i<n;i++)
				{
   					printf("\n\t\t\t\t\tEnter account holder's id : \n\t\t\t\t\t");
  					scanf("%d",&c[i].id);
					printf("\n\t\t\t\t\tEnter account holder's name : \n\t\t\t\t\t");
  					scanf("%s",&c[i].name);
					printf("\n\t\t\t\t\tEnter account holder's account no : \n\t\t\t\t\t");
  					scanf("%d",&c[i].accno);
					printf("\n\t\t\t\t\tEnter account holder's balance : \n\t\t\t\t\t");
 					scanf("%d",&c[i].abal);
				}
				break;
			case 2:
				//Display account holders details
				printf("\n\t\t\t\t\t-----------Account details-----------\n");
				printf("\n\t\t\t\t\tID\t\t\tName\t\t\tAccno\t\t\tAbal");
 				for(i=0;i<n;i++)
				{
					printf("\n\t\t\t\t\t=============================================================================================");
					//printf("\n\t\t\t\t\tAccount holder id : %d",c[i].id);
					//printf("\n\t\t\t\t\tAccount holder name : %s",c[i].name);
					//printf("\n\t\t\t\t\tAccount no : %d",c[i].accno);
					//printf("\n\t\t\t\t\tAccount balance : %d",c[i].abal);
					//printf("\n\t\t\t\t\tID\t\t\tName\t\t\tAccno\t\t\tAbal");
					printf("\n\t\t\t\t\t%d",c[i].id);
					printf("\t\t\t%s",c[i].name);
					printf("\t\t\t%d",c[i].accno);
					printf("\t\t\t%d",c[i].abal);
					//printf("\n\t\t\t\t\t======================================\n");
				}
 				break;
			case 3:
				//insert more account holders details
				printf("\n\t\t\t\t\tEnter account holder's data : ");
				printf("\n\t\t\t\t\tEnter account holder's id : \n\t\t\t\t\t");
  				scanf("%d",&c1.id);
				printf("\n\t\t\t\t\tEnter account holder's name : \n\t\t\t\t\t");
 				scanf("%s",&c1.name);
				printf("\n\t\t\t\t\tEnter account holder's account no : \n\t\t\t\t\t");
 				scanf("%d",&c1.accno);
				printf("\n\t\t\t\t\tEnter account holder's balance : \n\t\t\t\t\t");
 				scanf("%d",&c1.abal);
				printf("\n\t\t\t\t\tAt which position do you want to enter these data : \n\t\t\t\t\t");
				scanf("%d",&pos);
				for(i=n-1;i>=pos-1;i--)
				{
   					c[i+1]=c[i];
				}
				c[pos-1]=c1;
				n++;
				printf("\n\t\t\t\t\t..Added successfully..!!");
				printf("\n\t\t\t\t\t--------------Account details-------------\n");
				printf("\n\t\t\t\t\tID\t\t\tName\t\t\tAccno\t\t\tAbal");
				for(i=0;i<n;i++)
				{
					printf("\n\t\t\t\t\t=================================================================================");
					//printf("\n\t\t\t\t\tAccount holder id : %d",c[i].id);
					//printf("\n\t\t\t\t\tAccount holder name : %s",c[i].name);
					//printf("\n\t\t\t\t\tAccount no : %d",c[i].accno);
					//printf("\n\t\t\t\t\tAccount balance : %d",c[i].abal);
					printf("\n\t\t\t\t\t%d",c[i].id);
					printf("\t\t\t%s",c[i].name);
					printf("\t\t\t%d",c[i].accno);
					printf("\t\t\t%d",c[i].abal);
					//printf("\n\t\t\t\t\t===================================\n");
				}
				break;
			case 4:
				//Sort data by account balance
  				printf("\n\t\t\t\t\t.........Welcome to sorting section..........");
    			for(i=0;i<n;i++)
				{
       				for(j=i+1;j<n;j++)
     				{
      					if(c[i].abal>c[j].abal)
     					{
        					temp=c[i];
          					c[i]=c[j];
        					c[j]=temp;
       					}
      				}
				}
				printf("\n\t\t\t\t\t------------Account details-----------\n");
				printf("\n\t\t\t\t\tID\t\t\tName\t\t\tAccno\t\t\tAbal");
 				for(i=0;i<n;i++)
				{
  					printf("\n\t\t\t\t\t============================================================================");
					//printf("\n\t\t\t\t\tAccount holder id : %d",c[i].id);
					//printf("\n\t\t\t\t\tAccount holder name : %s",c[i].name);
					//printf("\n\t\t\t\t\tAccount no : %d",c[i].accno);
					//printf("\n\t\t\t\t\tAccount balance : %d",c[i].abal);
					printf("\n\t\t\t\t\t%d",c[i].id);
					printf("\t\t\t%s",c[i].name);
					printf("\t\t\t%d",c[i].accno);
					printf("\t\t\t%d",c[i].abal);
					//printf("\n\t\t\t\t\t=========================================\n");
				}
				break;
			case 5:
				//Delete the data
   				printf("\n\t\t\t\t\tEnter location to delete data : \n\t\t\t\t\t");
 				scanf("%d",&pos);
				temp=c[pos-1];
 				for(i=pos-1;i<n-1;i++)
				{
  					c[i]=c[i+1];
				}
				n--;
				printf("\n\t\t\t\t\t.......Deleted Sucessfully..........");
				printf("\n\t\t\t\t\t------------Account details--------------\n");
				printf("\n\t\t\t\t\tID\t\t\tName\t\t\tAccno\t\t\tAbal");
 				for(i=0;i<n;i++)
				{
					printf("\n\t\t\t\t\t==================================================================================");
					//printf("\n\t\t\t\t\tAccount holder id : %d",c[i].id);
					//printf("\n\t\t\t\t\tAccount holder name : %s",c[i].name);
					//printf("\n\t\t\t\t\tAccount no : %d",c[i].accno);
					//printf("\n\t\t\t\t\tAccount balance : %d",c[i].abal);
					printf("\n\t\t\t\t\t%d",c[i].id);
					printf("\t\t\t%s",c[i].name);
					printf("\t\t\t%d",c[i].accno);
					printf("\t\t\t%d",c[i].abal);
					//printf("\n\t\t\t\t\t===================================\n");
				}
				break;
			case 6:
				//Search data
         		printf("\n\t\t\t\t\tEnter account no. to search : \n\t\t\t\t\t");
         		scanf("%d",&ano);
           		for(i=0;i<n;i++)
           		{
             		if(ano==c[i].accno)
            		{
               			flag=1;
               			break;
            		}
           		}
        		if(flag==1)
        		{
          			printf("\n\t\t\t\t\tCongratulations !! Your account is present..");
        			printf("\n\t\t\t\t\tCurrent balance in your account %d",c[i].abal);
       				printf("\n\t\t\t\t\t--------------------------------------------------------------------------------------");
         			printf("\n\t\t\t\t\tDo u want to perform trasactions?[1/0]");
        			scanf("%d",&ch1);
        			if(ch1==1)
     				{
      					printf("\n\t\t\t\t\t-------------------Welcome to Trasaction Section------------------");
         				printf("\n\t\t\t\t\t1.Withdraw\n\t\t\t\t\t2.Deposite\n\t\t\t\t\t");
       					scanf("%d",&ch);
         				if(ch==1)
        				{
          					printf("\n\t\t\t\t\tEnter amount to Withdraw : \n\t\t\t\t\t");
        					scanf("%d",&wid);
        					bal=c[i].abal;
        					fb1=bal-wid;
        					c[i].abal=fb1;
        					printf("\n\t\t\t\t\tNow balance in your account is %d after withdraw %d \n\t\t\t\t\t",c[i].abal,wid);
        				}
        				else if(ch==2)
        				{
          					printf("\n\t\t\t\t\tEnter amount to Deposite : \n\t\t\t\t\t");
        					scanf("%d",&dep);
        					bal1=c[i].abal;
        					fb2=bal1+dep;
        					c[i].abal=fb2;
        					printf("\n\t\t\t\t\tNow balance in your account is %d after deposite %d \n\t\t\t\t\t",c[i].abal,dep);
        				}  
       				}
    				else
    				{
      					printf("\n\t\t\t\t\tokay..np");
    				}
     			}
				 //end of flag==1
        		else if(flag==0)
        		{
          			printf("\n\t\t\t\t\tAccount no. not found \n\t\t\t\t\tplease enter valid account no. to perform trasactions.");
        		}			
				break;
		/*	case 6:
			    printf("\nEnter Account ID to search : ");
				scanf("%d",&c[i].id);
				pos=cust(c[i].id,n);
				if(pos == -1)
				{
					printf("\nNot Found..");
				}
				else
				{
					printf("\nFound at location=%d..",pos+1);
					printf("\n%s\t%d\t%d",c[pos].name,c[pos].accno,c[pos].abal);
				}
				break; */
			default:
				printf("\n\t\t\t\t\t..Invalid..!!");
				break;
		}
  		printf("\n\n\n\t\t\t\t\tDo u want to continue..?\n\t\t\t\t\tpress 1 : \n\t\t\t\t\t");
 		scanf("%d",&ch);
	}
	while(ch==1);
}

