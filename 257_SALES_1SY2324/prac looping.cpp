#include<iostream>
#include<cstring>

using namespace std;

int main()
{
	int num,a=0,ctr; 
	
	cout<<"ODD"<<endl;
	cout<<"Enter an integer:";cin>>num;
	
	while(a<=num)
	{
		if(num%2==1)
		{
			cout<<num;
			ctr-=2;
		}
	}
}
