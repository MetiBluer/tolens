#include<iostream>
using namespace std;

int main()
{
	int no,x=1,ave;
	
	cout<<"How many grades?";cin>>no;
	
	while(x<=no)
	{
		int grade,sum=0;
		cout<<"Grade "<<x<<":";cin>>grade;
		sum=sum+grade;
		x++;	
	
	}	
	cout<<"the average is"<<sum/(no-1)<<".";
}
