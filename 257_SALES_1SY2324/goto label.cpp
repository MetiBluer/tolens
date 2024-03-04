//Label-address or location

//NAMEOFLABEL:

#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	string pangalanko;
	int ans;
	int sagotsaunangtanong;

simula:
	cout<<"[1]Triangle\n[2]Square\n\n""""Name:";
	cin>>pangalanko;
	
	cout<<"Favorite shape: ";
	cin>>sagotsaunangtanong;
	
	system("CLS");
	
	if(sagotsaunangtanong==1) 
	{
		cout<<"The favorite shape of "<<pangalanko<<" is Triangle."<<endl;
		cout<<"Try again?[1-Yes/2-No]:"; cin>>ans;
		if(ans==1)
		{
				system("CLS");
				goto simula;
		}
		
		else if (ans==2) {
			system("CLS");
			cout<<"Goodbye!";
		}
		
		else {
			system("CLS");
			cout<<"Goodbye sabi e...";
		}
	}
								
	else if (sagotsaunangtanong==2) 
	{
		cout<<"The favorite shape of "<<pangalanko<<" is Square."<<endl;
		cout<<"Try again?[1-Yes/2-No]:"; cin>>ans;
		if(ans==1)
		{
				system("CLS");
				goto simula;
		}
		
		else if (ans==2) {
			system("CLS");
			cout<<"Goodbye!";
		}
		
		else {
			system("CLS");
			cout<<"Goodbye sabi e...";
		}	
	}
	
	else {
		cout<<"Not in the list."; }
}

