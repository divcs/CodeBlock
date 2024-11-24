#include <iostream>
#include <vector>
using namespace std;

template <class T>
class QueueBase
{
protected:
    vector<T> q;
public:
    void enqueue(T,x)
    {
        q.push_back(x);
    }

    void dequeue()
    {
        if(!q.empty())
        {
            q.erase(q.begin());//remove first element
        }
        else
        {
            cout<<"Queue is empty. Cannot dequeue."<<endl;
        }
    }

    void display()
    {
        if(!q.isempty())
        {
            cout<<"Queue is empty";
        }
        else
        {
            for(T element: q)
            {
                cout<<element<<" ";
            }
        }
        cout<<endl;
    }
};

template <class T>
class Derived: public QueueBase<T>
{
public:
    using QueueBase<T>::QueueBase;
};

int main()
{
    QueueDerived<int> q1;
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        q1.enqueue(x);
    }

    QueueDerived<double> q2;
    cin>>n;

    for(int i=0; i<n; i++)
    {
        double x;
        cin>>x;
        q2.enqueue(x);
    }

    q1.display();
    cout<<"Dequeueing an element from the integer queue"<<endl;
    q1.dequeue();
    q1.display();

    q2.display();
    cout<<"Dequeueing an element from the integer queue"<<endl;
    q2.dequeue();
    q2.display();

    return 0;
}
