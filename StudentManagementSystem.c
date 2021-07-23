	#include<stdio.h>
	#define max 100
	struct student
	{
	int rno;
	char name[50];
	char mobno[10];
	float per;
	};
	int main()
	{
	               struct student s[max];
	       	struct student s1;
	struct student temp;
	int ch,n,i,ch1,id,flag=0,j,pos;
	do{
	printf("\n1-to insert the student details\n2-Display the student details\n3-Search the student by rollno\n4-sort by percentage\n5-delete by given position");
	printf("\nEnter your choice...!!");
	scanf("%d",&ch);
	switch(ch)
	{
	case 1:
	printf("\nDo you want to insert details of of many students?");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	printf("Enter roll number: ");
	scanf("%d", &s[i].rno);
	printf("Enter name: ");
	scanf("%s", &s[i].name);
	printf("Enter phone number: ");
	scanf("%s", &s[i].mobno);
	printf("Enter percentage: ");
	scanf("%f",&s[i].per);
	}
	break;
	case 2:
	printf("\n-----------Student Details---------------\n");
	printf("\nRoll no\t\tName\t\tPhone no\t\t percentage");
	
	for(i=0;i<n;i++)
	{
	printf("\n%d\t\t%s\t\t%s\t\t\t%f",s[i].rno,s[i].name,s[i].mobno,s[i].per);
	}
	break;
	case 3:
	printf("\nEnter student roll no to search\n");
	scanf("%d",&id);
	for(i=0;i<n;i++)
	{
	if(id==s[i].rno)
	{
	flag=1;
	break;
	}
	}
	if(flag==1)
	{
	printf("Your details are found...!!!");
	printf("\nDo you want to update these details?[1/0]");
	scanf("%d",&ch1);
	if(ch1==1)
	{
	printf("\nEnter the new roll no:");
	  scanf("%d",&s1.rno);
	printf("Enter new name: ");
	scanf("%s", &s1.name);
	printf("Enter new phone number: ");
	scanf("%s", &s1.mobno);
	printf("Enter new percentage: ");
	scanf("%f",&s1.per);
	s[i]=s1;
	printf("\nDetails updated successfully!!");
	for(i=0;i<n;i++)
	{
	printf("\n%d\t\t%s\t\t%s\t\t\t%f",s[i].rno,s[i].name,s[i].mobno,s[i].per);
	}
	}
	
	}
	else if(flag==0)
	{
	printf("\nRoll no %d not found",id);
	}
	break;
	case 4:
	for(i=0;i<n;i++)
	{
	for(j=i+1;j<n;j++)
	{
	if(s[i].per<s[j].per)
	{
	temp=s[i];
	s[i]=s[j];
	s[j]=temp;
	}
	}
	}
	for(i=0;i<n;i++)
	{
	printf("\n%d\t\t%s\t\t%s\t\t\t%f",s[i].rno,s[i].name,s[i].mobno,s[i].per);
	}
	break;
	case 5:
	printf("\nEnter location to delete data");
	scanf("%d",&pos);
	if(pos>n)
	{
	printf("invalid position..");
	}
	else
	{
	temp=s[pos-1];
	for(i=pos-1;i<n-1;i++)
	{
	s[i]=s[i+1];
	}
	n--;
	printf("\nDeleted Sucessfully");
	for(i=0;i<n;i++)
	{
	printf("\n%d\t\t%s\t\t%s\t\t\t%f",s[i].rno,s[i].name,s[i].mobno,s[i].per);
	}
	}
	break;
	default:
	printf("Invalid...");
	}
	
	printf("\nDo u want to continue press 1");
	scanf("%d",&ch);
	
	}while(ch==1);
	return 0;
	}
