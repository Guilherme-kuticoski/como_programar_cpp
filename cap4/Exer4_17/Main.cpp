#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    int counter;
    int number;
    int largest;

    counter = 0;

    while ( counter < 10 )
    {
        cout << "Digite um número: ";
        cin >> number;

        if ( counter == 0 || largest < number)
            largest = number;
        
        cout << "Maior número encontrado até agora: " << largest << endl;
        counter++;
    }
}