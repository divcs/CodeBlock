#include <iostream>

using namespace std;

class Room{
float length;
float breadth;
float height;

public:
    Room(float l, float b, float h):length(l),breadth(b),height(h){}
    Room(Room &obj){
        length=obj.length;
        breadth=obj.breadth;
        height=obj.height;
    }

    void update(float l, float b, float h){
    if (l == -1 && b == -1 && h == -1){
        breadth=breadth-10;
    }
    }

    void area(){
    cout<<"Area: "<<2*(length+breadth)*height<<endl;
    }

};

int main()
{
    float l, b,h;
    cin>>l>>b>>h;
    Room r1(l,b,h);
    Room r2(r1);

    r1.area();
    r2.update(-1,-1,-1);
    r2.area();
    return 0;
}
