#include<iostream>
using namespace std;
class time
{
	private :
		int h,m,s;
	public :
		void getTime()
		{
			cout<<"Enter Hour ::";
			cin>>h;
			cout<<"Enter Minute ::";
			cin>>m;
			cout<<"Enter Second ::";
			cin>>s;
		}
		
		void printTime()
		{
			cout<<"Hour ::"<<h<<endl;
			cout<<"Minute ::"<<m<<endl;
			cout<<"Second ::"<<s<<endl;
		}
		
		void addTime(time x,time y)
		{
			h = x.h + y.h;
			m = x.m + y.m;
			s = x.s + y.s;
		}
};

int main()
{
		cout<<"thummar yagnik"<<endl;
	cout<<"220130318098"<<endl;
	time t1,t2,t3;
	
	t1.getTime();
	t1.printTime();
	
	t2.getTime();
	t2.printTime();
	
	t3.addTime(t1,t2);
	cout<<"ADDING OF TIME IS ::"<<endl;
	t3.printTime();
	
	return 0;
}
