// Dynamic Queue in OOPS

#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<process.h>


struct node
 { 
	int adno;
   	char name[20];
   	float mks;
   	node *link;
 };
class queue
 { 
	node *f,*r;

   	public : 
	queue()
    	{ 
		f=NULL;
	      	r=NULL;
	}
	void insertq()
     	{ 
		node *ptr;
	       	ptr=new node;
	       	if(ptr==NULL)
		{ 
			cout<<"Overflow";
		  	exit(0);
		}
	       cout<<"\nEnter ADNO ";cin>>ptr->adno;
	       cout<<"\nEnter Name ";gets(ptr->name);
	       cout<<"\nEnter Marks ";cin>>ptr->mks;
	       ptr->link=NULL;
	       if(r==NULL)
		{ 
			r=ptr;
		  	f=ptr;
		}
	       else
		{
			r->link=ptr;
		 	r=ptr;
		}
	}


	void deleteq()
      	{ 
		if(f==NULL)
		{
			cout<<"Under Flow";
		  	exit(0);
		}
		node *ptr;
		if(f==r)
		 {
			f=NULL;
		  	r=NULL;
		  	ptr->link=NULL;
		  	cout<<"Deleted\n";
		  	cout<<"\nAdmission Number "<<ptr->adno;
		  	cout<<"\nNAme "<<ptr->name;
		  	cout<<"\nMarks "<<ptr->mks;
		  	delete ptr;
		 }
		else
		{ 
			ptr=f;
		    	f=f->link;
		    	ptr->link=NULL;
		    	cout<<"Deleted\n";
		    	cout<<"\nAdmission Number "<<ptr->adno;
		    	cout<<"\nNAme "<<ptr->name;
		    	cout<<"\nMarks "<<ptr->mks;
		    	delete ptr;
		}
	}


	void display()
	{ 
		if(r==NULL)
		{
			cout<<"No Elements to Display";
		  	getch();
		  	exit(0);
		}
		node *ptr;
		ptr=f;
		while(ptr!=NULL)
		{
		  	cout<<"\nAdmission Number "<<ptr->adno;
		    	cout<<"\nNAme "<<ptr->name;
		    	cout<<"\nMarks "<<ptr->mks;
		    	cout<<'\n';
		    	ptr=ptr->link;
		}
	}
};


void main()
 { 
	queue q;
   	char ch;
   	do {
		clrscr();
       		cout<<"\nInsert an Element     1";
       		cout<<"\nDelete an Element      2";
       		cout<<"\nDisplay Stack       3";
       		cout<<"\nExit                4";
       		int n;
       		cin>>n;
       		switch(n)
		{ case 1:{ 
				clrscr();
		   		q.insertq();
			 }break;

	  	case 2:{ 
				clrscr();
		   		q.deleteq();
			}break;
	  
		case 3:{ 
				clrscr();
		   		q.display();
			}break;
	  
		case 4:exit(0);

	  	}
		cout<<"Want to Continue? ";
		cin>>ch;
   	}
	while(ch=='Y' || ch=='y');
  	getch();
 }