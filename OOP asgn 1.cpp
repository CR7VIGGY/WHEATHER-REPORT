//QUES ).create a class name wheather report that hold daily wheather report with data members day of month high temp,low temp,amount of snow,rain,use diff. 
//types of constructors to intializethe object also nclude a function that prompt the user and set values for each field so that u can over write the 
//default value . write a menu driven progg. withn option to enter data and generate maonthly report that display the address of each ?
//VIGHNESH TIWARI , 4252 , ARMY INSTITUTTE OF TECHNOLOGY , PUNE , INDIA
#include<bits/stdc++.h>                     //GITHUB PROFILE : CR7 VIGGY
using namespace std;

class wheather
{
	int i,hight,lowt,rain,snow;
	public:
		wheather()                     //constructor formation
		{
			int hight=100,lowt=0,rain=20,snow=0;
		}
	
	static int avgh,avgl,avgr,avgs;
	
	public:
	
	void getdata();
	void putdata(int x);
	void deldata(int n);
	void avg(int n);
	
};
int wheather :: avgh;
int wheather :: avgl;
int wheather :: avgr;
int wheather :: avgs;

void wheather :: getdata()
{
			cout<<"Enter the following details\nHIGH TEMPERATURE\nLOW TEMPERATURE\nRAIN\nSNOW\n";
			cin>>hight>>lowt>>rain>>snow;
			//sum of all entries
			avgh = avgh+hight;
			avgl = avgl+lowt;
			avgr = avgr+rain;
			avgs = avgs+snow;
			
			
	//return (avgh,avgl,avgr,avgs);
}

void  wheather :: putdata(int i )
{
	
	cout<<i<<"\t"<<hight<<"\t\t\t"<<lowt<<"\t\t"<<rain<<"\t"<<snow<<"\n";
	
}

void  wheather :: deldata(int n)
{
	hight = 0;
	lowt = 0;
	rain = 0;
	snow = 0;
}

void wheather :: avg(int n)
{
	avgh = avgh/n;
	avgl = avgl/n;
	avgr = avgr/n;
	avgs = avgs/n;
	cout<<"AVERAGE :\t"<<avgh<<"\t\t"<<avgl<<"\t\t"<<avgr<<"\t"<<avgs<<"\n";
}

int main()
{
	int x,m,i,c,n;
	wheather w[32];
	do
	{
		cout<<"PRESS 1 : ENTER DAY\nPRESS 2 : GO TO MAIN MENU\n";
		cin>>c;
	
		switch(c)
		{
			case 1 : 
			cout<<".......ENTER YOUR DAY (1-31)........\n";
			cin>>x;	
			if(x>31)
			cout<<"!!!!ENTER VALID DAY ONLY!!!!\n";
			break;
			
			case 2 : 
			cout<<"PRESS 1 : ENTER DATA\nPRESS 2 : DISPLAY DATA\nPRESS 3 : EDIT DATA\nPRESS 4 : TO DELETE DATA\nPRESS 5 : AVERAGE OF PARTICULAR DATA\nPRESS 6 : SHOW ALL DATA\nPRESS 7 : EXIT \n";
			cin>>m;
			
			switch(m)
			{
				case 1 : w[x].getdata();break;
			
				case 2 : cout<<"ENTER THE DAY TO BE DISPLAYED\n";
							cin>>n;
							cout<<"DAY\tHIGH TEMPERATURE\tLOW TEMPERATURE\tRAIN\tSNOW\n";
							w[n].putdata(n);break;
				
				case 3 : cout<<"ENTER WHICH DAY DATA TO BE EDITED\n";
						 cin>>n;
						 w[n].getdata();	
						 break;
			
				case 4 : cout<<"ENTER WHICH DAY DATA IS TO BE DELETED\n";
						 cin>>n;
						 w[n].deldata(n);
					   	 break;
			
				case 5 : cout<<"ENTER THE DAY TILL WHICH YOU WANT AVERAGE\n";
						 cin>>n;
						 cout<<"DAY\tHIGH TEMPERATURE\tLOW TEMPERATURE\tRAIN\tSNOW\n";
						 w[n].avg(n);
						 
					     break;
			
				case 6 : cout<<"DAY\tHIGH TEMPERATURE\tLOW TEMPERATURE\tRAIN\tSNOW\n";
							for(i = 1 ; i <= 31 ; i++)
							w[i].putdata(i);
							break;
				
				case 7 : ;break;
			}
			break;
		}
	}
	while(m !=7);
	
	return 0;
}
