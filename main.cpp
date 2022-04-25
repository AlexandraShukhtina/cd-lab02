#include <iostream>

using namespace std;

int main()
{
    cout << "Enter A and B: ";
     double a, b;
    cin >> a >> b;
    cout << "A + B = " << a + b << '\n' << "A - B = " << a - b;
    cout << "A * B = " << a * b << '\n'
         << "A / B = " << a / b << '\n';
    if (a > b)
    cout <<"MAX="<< a;
    else
       if (a < b)
       cout << "MAX="  << b;
    cout << "A + B = " << a + b << '\n'
         << "A - B = " << a - b
         << "A * B = " << a * b << '\n';

    if (a < b)
         cout << "MIN=" << a;
         else
           if (a > b)
           cout << "MIN=" << b;
}
