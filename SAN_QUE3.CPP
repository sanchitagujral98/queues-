// Static QUEUE basic

#define size 10
#include<iostream.h>
#include<conio.h>
#include<process.h>


int a[size],f=-1,r=-1;

void insertq()
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
      		cin>>a[r];
      	}
   	else if( r==size-1)
    	{ 
		r=0;cin>>a[r];
     	}
   	else
    	{ 
		r++;
      		cin>>a[r];
      	}
 }

void deleteq()
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

void display()
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
		   		insertq();
		   	 }break;
	  	
		case 2:{ 
				clrscr();
		   		deleteq();
		   	}break;
	  
		case 3:{ 
				clrscr();
		   		display();
		   	}break;
	  	case 4: exit(0);
	  	default : exit(0);
	  	}
		cout<<"\nWant to Continue? ";cin>>ch;
	  }
	while(ch== 'Y' || ch=='y');
	getch();	  
  }
