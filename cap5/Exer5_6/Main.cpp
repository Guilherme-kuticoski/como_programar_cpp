#include <iostream>
using std::cout;
using std::endl;
using std::cin;

int main()
{
    int number;
    int counter = 0;
    int sum = 0;
    double average;

    cout << "";
    cin >> number;

    for(counter = 0; number != 9999; counter++)
    {   
        sum += number;

        cout << "";
        cin >> number;
    }

    average = static_cast< double >( sum ) / counter;
    cout << endl << "Média dos valores: " << average << endl;
}
