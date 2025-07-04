#include<iostream>
using namespace std;
int main()
{
    int a;

    cout << "Enter number:";
    cin  >> a;

    if(a>90 && a<100)
    {
        cout << "A";
    }
    else if(a>=80 && a<=90)
    {
        cout << "B";
    }
    else if(a>=70 && a<=80)
    {
        cout << "C";
    }
    else
    {
        cout << "Fail";
    }

    return 0;
}