#include<iostream>
using namespace std;
class add
{
	int a,b;
	friend void getdata(add &n);
	
	public :
		void putdata()
		{
			cout<<"Sum of A+B is ::"<<a+b;
		}
};
void getdata(add &n)
{
	cout<<"A  ::";
	cin>>n.a;
	cout<<"B  ::";
	cin>>n.b;
}

int main()
{
		cout<<"thummar yagnik"<<endl;
	cout<<"220130318098"<<endl;
	add n;
	getdata(n);
	n.putdata();
	
	
	return 0;
}
