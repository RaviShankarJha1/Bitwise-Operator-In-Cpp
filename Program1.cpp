#include<iostream>
using namespace std;

int main()
{
    int num1,num2;
    cout<<"enter number 1 ";
    cin>>num1;
    cout<<"enter number 2 ";
    cin>>num2;


    int bitwise_and=num1&num2;
    int bitwise_or=num1|num2;
    int bitwise_xor=num1^num2;
    int bitwise_not=~num1;
    int bitwise_leftshift=num1<<1;
    int bitwise_rightshift=num2>>1;


    cout<<"binary AND operation: "<<bitwise_and<<endl;
    cout<<"binary OR operation: "<<bitwise_or<<endl;
    cout<<"binary XOR operation: "<<bitwise_xor<<endl;
    cout<<"binary NOT operation: "<<bitwise_not<<endl;
    cout<<"binary LEFTSHIFT operation: "<<bitwise_leftshift<<endl;
    cout<<"binary RIGHTSHIFT operation: "<<bitwise_rightshift<<endl;
}
