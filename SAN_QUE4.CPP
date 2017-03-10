// Static QUEUE using parameters

#define size 10
#include<iostream.h>
#include<conio.h>
#include<process.h>


void insertq(int a[size],int &f,int &r,int num)
 { 
	if( (f==0 && r==size-1) || f==r+1)
    	{
		cout<<"OverFlow";
     		getch();
		exit(0);
     	}
   	if(r==-1)
    	{ 
		f=0;
      		r++;
      		a[r]=num;
      	}
   	else if( r==size-1)
    	{ 
		r=0;a[r]=num;
     	}
   	else
    	{ 
		r++;
      		a[r]=num;
      	}
 }

void deleteq(int a[size],int &f,int &r)
 { 
	if(f==-1)
    	{ 
		cout<<"Underflow ";
      		getch();
      		exit(0);
      	}
   	int num;
   	num=a[f];
   	if(f==r)
   	 {
		f=-1;
     		r=-1;
     	 }
   	else if(f==size-1)
    	f=0;
   	else
   	f++;
   	cout<<"DELETED "<<num;
 }

void display(int a[size],int f,int r)
 { 
	if( f==-1 && r==-1)
    	{ 	
		cout<<"Queue Empty";
      		getch();
      		exit(0);
      	}
   	else if(f<r)
    	{ 
		for(int i=f;i<=r;i++)
       		{	
			cout<<a[i];
			cout<<'\n';
		}
      	}
   	else if(f > r)
    	{ 
		for(int i=f;i<=size-1;i++)
      		{ 	
			cout<<a[i];
			cout<<'\n';
		}
      	}
   	else
    	cout<<a[r];
 }

void main()
 {
   int a[size],f=-1,r=-1;
   char ch;
   do { 
	clrscr();
	cout<<"\nInsert Element    1";
	cout<<"\nDelete Element    2";
	cout<<"\nDisplay           3";
	cout<<"\nExit              4 ";
	int n;
	cin>>n;
	switch(n)
	{ case 1:{ 
			clrscr();
		   	int num;
		   	cout<<"Enter the element ";cin>>num;
		   	insertq(a,f,r,num);
		 }break;
	  
	case 2:{ 	
			clrscr();
		   	deleteq(a,f,r);
		}break;
	  
	case 3:{ 
			clrscr();
		   	display(a,f,r);
		}break;
	  
	case 4: exit(0);
	default : exit(0);
	}
	cout<<"\nWant to Continue? ";cin>>ch;
	}
	while(ch== 'Y' || ch=='y');
	getch();
}
