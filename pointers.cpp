#include <iostream>
using namespace std;

void operate(int &x, int &y)   
{
    int *p = &x;              

    cout << "Arithmetic Operators\n";
    cout << *p + y << endl;   
    cout << *p - y << endl;   
    cout << *p * y << endl;   
    cout << *p / y << endl;   
    cout << *p % y << endl;   

    cout << "\nRelational Operators\n";
    cout << (*p > y) << endl; 
    cout << (*p < y) << endl; 
    cout << (*p == y) << endl;
    cout << (*p != y) << endl;

    cout << "\nLogical Operators\n";
    cout << (*p && y) << endl;
    cout << (*p || y) << endl;

    cout << "\nBitwise Operators\n";
    cout << (*p & y) << endl; 
    cout << (*p | y) << endl; 
    cout << (*p ^ y) << endl; 

    cout << "\nShift Operators\n";
    cout << (*p << y) << endl;
    cout << (*p >> y) << endl;
}

int main()
{
    int a=8, b=2;   
    operate(a, b);
    return 0;
}
