#include<iostream>
using namespace std;
int main()
{
    int a,b;
    char s;

    cout << "Enter number1" << endl;
    cin  >> a;
    cout << "Enter number2" << endl;
    cin  >> b;
    cout << "Enter operator" << endl;
    cin  >> s;
    switch(s)
    {
        case '+':
        cout << "addition " << a+b;
        break;
        case '-':
        cout << "subtraction " <<  a-b;
        break;
        case '*':
        cout << "multiplication " << a*b;
        break;
        case '/':
        cout << "division " << a/b;
        break;
        default:
        cout << "Invalid";
    }
    return 0;
}