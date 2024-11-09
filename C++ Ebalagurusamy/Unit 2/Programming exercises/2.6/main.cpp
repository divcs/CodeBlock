#include <iostream>

using namespace std;

class temp{
double c;

public:
    double setTemp(double t){
        c=(t-32)*5/9;
        return c;
    }

    void display(){
        cout<<c<<"Degree Celsius";
    }
};

int main()
{
    double f;
    cin>>f;

    temp t1;
    t1.setTemp(f);
    t1.display();
    return 0;
}
