#include<iostream>
using namespace std;
class emp
{
	private :
		int emp_id;
		string emp_name;
	
	public:
		void getdata()
		{
			cout<<"Enter The Employee Id ::";
			cin>>emp_id;
			cin.ignore();
			cout<<"Enter The Employee Name ::";
			getline(cin,emp_name);
		}
		
		void putdata()
		{
			cout<<"Employee Name is ::"<<emp_name<<endl;
			cout<<"Employee Id is ::"<<emp_id<<endl;
		}
};
int main()
{
	int i,n;
	cout<<"thummar yagnik"<<endl;
	cout<<"220130318098"<<endl;
	
	cout<<"Enter The Size of Employee Array ::"<<endl;
	cin>>n;
	
	emp e1[10];
	
	for(i=1;i<=n;i++)
	{
		e1[i].getdata();
	}
	
	for(i=1;i<=n;i++)
	{
		e1[i].putdata();
	}
	return 0;
	
}
