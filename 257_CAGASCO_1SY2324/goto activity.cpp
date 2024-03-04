#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	string pangalanko, ans;
	int sagotsaunangtanong;

	cout<<"[1]Triangle\n[2]Square\n\nName:";
	cin>>pangalanko;
	
	cout<<"Favorite shape: ";
	cin>>sagotsaunangtanong;
	
	system("CLS");
	
	if(sagotsaunangtanong==1) 
	{
		cout<<"The favorite shape of "<<pangalanko<<" is Triangle.";		
	}
								
	else if (sagotsaunangtanong=2) 
	{
		cout<<"The favorite shape of "<<pangalanko<<" is Square.";	
	}
	
	else {
		cout<<"Not in the list."; }
}
