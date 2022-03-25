#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int number1, number2;

    cout << "Enter two integers: ";
    cin >> number1 >> number2;
    
    cout << "The sum is " << (number1 + number2) << endl;
    cout << "The diff is " << (number1 - number2) << endl;
    cout << "The product is " << (number1 * number2) << endl;
    cout << "The quotient is " << (number1 / number2) << endl;
}
