#include<iostream>
using namespace std;

int main()
{
    int num1,position,position2;
    cout<<"enter number: ";
    cin>>num1;
    cout<<"enter position that needs to be set:";
    cin>>position;
    cout<<"enter position that need to be reset: ";
    cin>>position2;

  
    int new_num1=num1|(1<<position);
    cout<<"set number= "<<new_num1<<endl;
    int new_num2=num1&(~(1<<position2));
    cout<<"reset number="<<new_num2<<endl;
}
