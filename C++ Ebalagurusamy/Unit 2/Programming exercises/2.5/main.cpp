#include <iostream>

using namespace std;

int main()
{
    double f;
    double c;

    cin>>f;
    c=(f-32)*5/9;
    if(c==1){
          cout<<"Temperature: "<<c <<" degree Celsius";
    }else{
        cout<<"Temperature: "<<c <<" degrees Celsius";
        }

    return 0;
}
