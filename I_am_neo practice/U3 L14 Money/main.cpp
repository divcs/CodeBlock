#include <iostream>

using namespace std;
class Money{
    int rupee;
    int paise;

    public:
        Money(int r=0, int p=0):rupee(r),paise(p){}

        Money(int p, int r){
        paise=p;
        rupee=r;

        if(paise>99){
            rupee=rupee+(paise/99);
            paise=paise%99;
        }
        }

        void getPaise(){
        cout<<paise<<endl;
        }
        void getRupee(){
        cout<<rupee<<endl;
        }

        void getMoney(){
        cout<<rupee<<"."<<paise<<endl;
        }

};

int main()
{
    int r, p;
    cin>>r;
    cin>>p;

    Money m(r,p);


    return 0;
}
