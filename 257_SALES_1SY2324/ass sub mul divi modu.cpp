#include<iostream>

#include<cstring>

using namespace std;



int main()

{

	int sagot;
	int ans;

	string name;


start:

	cout<<"[1]Addition\n[2]Subtraction\n[3]Multiplication\n[4]Division\n[5]Modulo\n\n";


	cout<<"Name:";cin>>name;


	cout<<"Select Operation:";cin>>sagot;
	
	system("CLS");

	if(sagot==1) 

	{

		cout<<"The operation of "<<name<<" is addition."<<endl;

		cout<<"Try again?[1-Yes/2-No]:";cin>>ans;

		if(ans==1)

		{

				system("CLS");

				goto start;

		}


		else if (ans==2) {

			system("CLS");

			cout<<"Goodbye!";

		}


		else 

		{

			system("CLS");

			cout<<"Goodbye sabi e...";

		}

	}


	else if (sagot==2) 

	{

		cout<<"The operation of "<<name<<" is subtraction."<<endl;

		cout<<"Try again?[1-Yes/2-No]:"; cin>>ans;

		if(ans==1)

		{

				system("CLS");

				goto start;

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

	else if (sagot==3) 

	{

		cout<<"The operation of "<<name<<" is multiplication."<<endl;

		cout<<"Try again?[1-Yes/2-No]:"; cin>>ans;

		if(ans==1)

		{

				system("CLS");

				goto start;

		}


		else if (ans==2) {

			system("CLS");

			cout<<"Goodbye!";

		}


		else 

		{

			system("CLS");

			cout<<"Goodbye sabi e...";

		}	

	}

	else if (sagot==4) 

	{

		cout<<"The operation of "<<name<<" is division."<<endl;

		cout<<"Try again?[1-Yes/2-No]:"; cin>>ans;

		if(ans==1)

		{

				system("CLS");

				goto start;

		}


		else if (ans==2) {

			system("CLS");

			cout<<"Goodbye!";

		}


		else 

		{

			system("CLS");

			cout<<"Goodbye sabi e...";

		}	

 }
	else if (sagot==5) 

	{

		cout<<"The operation of "<<name<<" is modulo."<<endl;

		cout<<"Try again?[1-Yes/2-No]:"; cin>>ans;

		if(ans==1)

		{

				system("CLS");

				goto start;

		}


		else if (ans==2) {

			system("CLS");

			cout<<"Goodbye!";

		}


		else 

		{

			system("CLS");

			cout<<"Goodbye sabi e...";

		}	

 }

	else

	{

		cout<<"Not in the list."; 

	}

}


