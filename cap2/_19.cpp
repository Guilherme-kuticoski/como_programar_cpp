#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int number1, number2, number3;

    cout << "Enter three integers: ";
    cin >> number1 >> number2 >> number3;
    
    cout << "soma: " << (number1 + number2 + number3) << endl;
    cout << "média: " << ((number1 + number2 + number3) / 3) << endl;
    cout << "Produto: " << (number1 * number2 * number3) << endl;
    cout << "O menor: " << (number1 / number2) << endl;
    cout << "O maior: " << (number1 / number2) << endl;

}
