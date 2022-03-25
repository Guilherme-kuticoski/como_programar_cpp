#include <iostream>
using std::cout;
using std::endl;
using std::cin;

int main()
{
    int cod;
    int qtd;
    double value;
    double total = 0;

    cout << "Digite o número do produto(-1 para sair): ";
    cin >> cod;
    
    while (cod != -1)
    {
        switch (cod)
        {
        case 1:
            value = 2.98;
            break;
        case 2:
            value = 4.50;
            break;
        case 3:
            value = 9.98;
            break;
        case 4:
            value = 4.49;
            break;
        case 5:
            value = 6.87;
            break;
        default:
            value = 0;
            break;
        }

        cout << "Digite a quantidade vendida: ";
        cin >> qtd;

        total += qtd * value;

        cout << endl << "Digite o número do produto(-1 para sair): ";
        cin >> cod;
    }

    cout << endl << "Valor total: " << total << endl;
}
