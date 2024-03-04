#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	string name;
	int ans;

	cout<<"[1]Triangle\n[2]Square\n\n";
	
	cout<<"Name:";cin>>name;
	
	cout<<"Favorite shape: ";
	cin>>ans;
	
	system("CLS");
	
	if(ans==1) 
	{
		cout<<"The favorite shape of "<<name<<" is Triangle.";		
	}
								
	else if (ans=2) 
	{
		cout<<"The favorite shape of "<<name<<" is Square.";	
	}
	
	else 
	{
		cout<<"Not in the list."; 
	}
}

