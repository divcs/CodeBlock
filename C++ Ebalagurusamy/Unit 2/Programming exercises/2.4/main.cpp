#include <iostream>
using namespace std;

int main()
{
    int a1, b1, c1, a2, b2, c2;

    cout << "I --- Enter values for a=250, b=85, c=25 (for a / (b - c)): " << endl;
    cin >> a1 >> b1 >> c1;

    cout << "II -- Enter values for a=300, b=70, c=70 (for a / (b - c)): " << endl;
    cin >> a2 >> b2 >> c2;

    if (b1 - c1 != 0) {
        int x1 = a1 / (b1 - c1);
        cout << "Result for a=250, b=85, c=25: " << x1 << endl;
    } else {
        cout << "Division by zero error for a=250, b=85, c=25!" << endl;
    }

    if (b2 - c2 != 0) {
        int x2 = a2 / (b2 - c2);
        cout << "Result for a=300, b=70, c=70: " << x2 << endl;
    } else {
        cout << "Division by zero error for a=300, b=70, c=70!" << endl;
    }

    return 0;
}
