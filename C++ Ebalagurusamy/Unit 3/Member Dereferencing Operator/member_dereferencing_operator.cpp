// ::*: Defines a pointer to a member within a class.
// *: Dereferences a pointer-to-member on an actual instance.
// ->*: Dereferences a pointer-to-member on a pointer to an instance.

// 1. ::* — Pointer - to - Member Operator
// The ::*operator is used to define and access a pointer to a class member.When you have a pointer to a member of a class, you use ::*to specify that the pointer points to a specific member of that class.class MyClass
{
public:
 int data;
 void display() { std::cout << "Display called"; }
};

int MyClass::*ptrToData = &MyClass::data;            // Pointer to `data` member of `MyClass`
void (MyClass::*ptrToDisplay)() = &MyClass::display; // Pointer to `display` member function

// 2. * — Dereferencing a Pointer to Member Variable

// When you have an instance of a class(or a pointer to an instance) and a pointer to a member variable, you can use *to dereference the pointer to access or modify the member.

MyClass obj;
obj.data = 10;

// Using a pointer-to-member to access `data`
std::cout << obj.*ptrToData << std::endl; // Outputs 10

// 3.->* — Dereferencing a Pointer to Member Variable or Function through a Pointer to an Object

// When you have a pointer to an instance of a class and a pointer to a member(variable or function), you use->*to dereference the member pointer through the instance pointer.

MyClass *ptrObj = &obj;
ptrObj->*ptrToData = 20; // Modifies `data` to 20 through the pointer-to-member

// Calling a member function through a pointer-to-member function and an object pointer
(ptrObj->*ptrToDisplay)(); // Calls `display()` on `obj`
