#include <iostream>
using namespace std;

class X
{
public:
 int a;
 void f(int b)
 {
  cout << "The value of b is " << b << endl;
 }
};

int main()
{

 // declare pointer to data member
 int X::*ptiptr = &X::a;

 // declare a pointer to member function
 void (X::*ptfptr)(int) = &X::f;

 // create an object of class type X
 X xobject;

 // initialize data member
 xobject.*ptiptr = 10;

 cout << "The value of a is " << xobject.*ptiptr << endl;

 // call member function
 (xobject.*ptfptr)(20);
}

// or simplified version

typedef int X::*my_pointer_to_member;
typedef void (X::*my_pointer_to_function)(int);

int main()
{
 my_pointer_to_member ptiptr = &X::a;
 my_pointer_to_function ptfptr = &X::f;
 X xobject;
 xobject.*ptiptr = 10;
 cout << "The value of a is " << xobject.*ptiptr << endl;
 (xobject.*ptfptr)(20);
}