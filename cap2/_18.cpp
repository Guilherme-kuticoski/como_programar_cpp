#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int number1, number2;

    cout << "Enter two integers: ";
    cin >> number1 >> number2;
    
    if (number1 == number2)
        cout << "Estes números são iguais" << endl;
    if (number1 > number2)
        cout << number1 << " é o maior" << endl;
    if (number2 > number1)
        cout << number2 << " é o maior" << endl;
}
