/*
5.Create a program that will read the temperature in (degrees Celsius) 
 of an unknown number of persons entering a shop. The temperature in Fahrenheit will be printed thereafter.
If a temperature equals to zero (0) degrees Celsius is entered, which is the end of file (EOF),
 print how many people were processed before encountering the EOF then stop operation. (5 points)
*/
//f=c*(9/5)+32
#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	float person=1,num=1,tempf,tempc;
	cout<<"The temperature of the person entered in Degrees Celsius:";cin>>tempc;
		while()
		{
		tempf=tempc*(9/5)+32;
		cout<<tempf;
		cout<<" degrees farenheit is the temperature of the persons who entered the shop\n";
		person=person+1;
		}
}
