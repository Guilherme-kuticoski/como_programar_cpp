#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    int row = 1;
    int column;
    int counter;
    char center;

    cout << "Digite um número: ";
    cin >> counter;

    while ( row <= counter )
    {
        if ( row == 1 || row == counter )
            center = '*';
        else
            center = ' ';

        column = 2;

        cout << "*";
        while ( column < counter)
        {
            cout << center;
            column++;
        }
        cout << "*" <<endl;

        row++;
    }
}