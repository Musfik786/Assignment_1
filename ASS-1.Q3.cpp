#include <iostream>
using namespace std;
int main()
{
    cout << "Write a C++ program to take length and breadth of a rectangle and print its area.";
    cout << "\nAns : \n";
    int l, b, a;
    cout << "Enter the length of the rectangle : \n";
    cin >> l;
    cout << "Enter the breadth of the rectangle : \n";
    cin >> b;
    a = l * b;
    cout << "The area of the rectangle is : " << a;
    return 0;
}