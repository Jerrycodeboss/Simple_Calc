#include<iostream>
using namespace std;
int main()
{
    double num1,num2;
    char operation;

    cout<<"Enter the operation(+,-,*,/) ";
    cin>>operation;
    cout<<"Enter the first number: ";
    cin>>num1;
    cout<<"Enter the second number: ";
    cin>>num2;
    double result;
    switch(operation)
    {
        case1:
            result=num1+num2;
            break;
        case2:
            result=num1-num2;
            break;
        case3:
            result=num1*num2;
            break;
        case4:
            result=num1/num2;
            break;
        default:
            cout<<"Invalid Operator"<<endl;

    }
    cout<<result;
    return 0;
}
