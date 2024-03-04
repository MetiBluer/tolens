#include<iostream>
#include<windows.h>
#include<cstring>
using namespace std;

void gotoxy(short x, short y)
{
	COORD pos ={x,y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);

}

int main()
{
	string Name, crsyr, semyr,timeday, crsno, room, inst;
	int code, IDno;
	int x; 
	gotoxy (30,2);
	cout<<"UNIVERSITY OF SAINT LOUIS";
	
	gotoxy (30,3);
	cout<<"Tuguegarao City, Cagayan";
	
	gotoxy (1,6);	
	cout<<"IDNo";cin>>IDno;
	
	gotoxy (1,7);
	cout<<"Name";cin>>Name;
	
	gotoxy (1,8);
	cout<<"Crs/Yr";cin>>crsno;
	
	gotoxy (1,9);
	cout<<"Crs/SY";cin>>semyr;
	
	gotoxy (33,8);
	cout<<"Code No";cin>>code;
	
	gotoxy (34,9);
	cout<<"Time/Days";cin>>timeday;
	
}
