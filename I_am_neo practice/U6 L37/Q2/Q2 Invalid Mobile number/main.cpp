#include <iostream>
#include <string>
#include <algorithm>
#include <exception>
using namespace std;

int main()
{
    string num;
    cin>>num;

    bool allDigitsOnly = all_of(num.begin(), num.end(), ::isdigit);

    if(num!="")
    {
        if (!allDigitsOnly)
        {
            cout << "Invalid input" << endl;
            return ;
        }
    }
    else if{(num.size()>10 || num.size()<10)
{
    cout<<"The mobile number should have 10 digits"<<endl;
}}
else if(num.length()>0)
    {
        cout<<"The entered mobile number is valid"<<endl;
    }
    return 0;
}
