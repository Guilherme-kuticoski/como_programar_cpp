#include <iostream>
using std::cout;
using std::endl;
using std::cin;

int main()
{
    int counter;
    int number;
    int small = 0;

    cout << "";
    cin >> counter;

    for(int i = counter; i > 0; i--)
    {
        cout << "";
        cin >> number;

        if ( number < small )
            small = number;
    }

    cout << endl << "Menor número: " << small << endl;
}
