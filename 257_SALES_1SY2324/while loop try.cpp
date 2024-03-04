#include<iostream>
using namespace std;

int main()
{
	int x=1,sum=0;
	float ave,grade;
	

	cout<<"Average of my 3 grades";
	
	while(x<=3)
	{
		cout<<"Grade"<<x<<":";
		cin>>grade;
		sum=sum+grade;
		x=x=1;
	}
	ave=sum/(x-1);
	cout<<"The average is "<<ave<<".";
}
