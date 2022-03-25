#include <iostream>
using std::cout;
using std::endl;
using std::cin;

int main()
{
    int counter;
    int number;
    int sum = 0;

    cout << "";
    cin >> counter;

    for(int i = counter; i > 0; i--)
    {
        cout << "";
        cin >> number;

        sum += number;
    }

    cout << endl << "Soma dos valores: " << sum << endl;
}
