#include <iostream>

using namespace std;
class Numbers{
int n1;
int n2;
int n3;

public:
    Numbers(int a, int b, int c): n1(a),n2(b),n3(c){}

    void printVal(){
    cout<<n1<<" "<<n2<<" "<<n3<<endl;
    }

    void printSum(){
    cout<<n1+n2+n3<<endl;
    }

    int greatestNum(){
    if(n1>n2 && n1>n3){
        cout<<n1<<endl;
    }else if(n2>n3){
    cout<<n2<<endl;}
    else cout<<n3<<endl;
    }
};

int main()
{
    int a,b,c;
    cin>>a>>b>>c;

    Numbers num(a,b,c);
    num.printVal();
    num.printSum();
    num.greatestNum();

    return 0;
}
