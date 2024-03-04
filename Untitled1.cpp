#include <iostream>
 //recall on decision structure
#include <iostream>
using namespace std;

int main()
{
    int num;
    int num2;
    int op,sop,dop;
    
    cout<<"Enter num1: ";cin>>num;
    cout<<"Enter num2: ";cin>>num2;
    
    cout<<"OPTION\n[1]Add\n[2]Sub\n[3]Mul\n[4]Div\n";
    cout<<"Enter Choice: "; cin>>op;
    
    if(op==1)
    {
        cout<<"Sum is "<<num+num2<<endl;
    }
    else if(op==2)
    {
        cout<<"Subtraction Option\n[1]F-S\n[2]S-F\nChoice: ";cin>>sop;
        if(sop==1)
        {
            cout<<"Diff is "<<num-num2<<endl;
        }
        if(sop==2)
        {
            cout<<"Diff is "<<num2-num<<endl;
        }
        else
        {
            cout<<"Wrong input"<<endl;
        }
    }
    else if(op==3)
    {
        cout<<"Prod is "<<num*num2<<endl;
    }
    else if(op==4)
    {
        cout<<"Division Option\n[1]F/S\n[2]S/F\nChoice: ";cin>>dop;
        if(dop==1)
        {
            cout<<"Diff is "<<num-num2<<endl;
        }
        if(dop==2)
        {
            cout<<"Diff is "<<num2-num<<endl;
        }
        else
        {
            cout<<"Wrong input"<<endl;
        }
    }
    else
    {
        cout<<"Wrong Choice"<<endl;
    }
    
    
}

