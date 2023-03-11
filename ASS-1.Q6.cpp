#include <iostream>
using namespace std;
int main()
{
    cout << "Write a C++ program to swap two numbers with the help of a third variable.";
    cout << "\nAns : \n";
    int a, b, c;
    cout << "Enter the 1st number (before swapping) : ";
    cin >> a;
    cout << "Enter the 2nd number (before swapping) : ";
    cin >> b;
    c = b;
    b = a;
    a = c;
    cout << "The 1st number (after swapping) : " << a << "\n";
    cout << "The 2nd number (after swapping) : " << b << "\n";
    return 0;
}