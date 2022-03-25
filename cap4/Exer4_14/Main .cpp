#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    int account;
    double balance;
    double taxes;
    double credit;
    double creditLim;

    cout << "Entre com o numero da conta (-1 para terminar): ";
    cin >> account;

    while ( account != -1)
    {
        cout << "Entre com o saldo inicial: ";
        cin >> balance;
        cout << "Entre com o total de taxas: ";
        cin >> taxes;
        cout << "Entre com o total de creditos: ";
        cin >> credit;
        cout << "Entre com o limite de credito: ";
        cin >> creditLim;

        balance += taxes - credit;

        if ( balance > creditLim)
        {
            cout << "Novo saldo: " << balance << endl;
            cout << "Conta:\t\t\t" << account << endl;
            cout << "Limite de credito: " << creditLim << endl;
            cout << "Saldo:\t\t\t" << balance << endl;
            cout << "Limite de credito ultrapassado." << endl << endl;
        }
        else
            cout << "Novo saldo: " << balance << endl << endl;

        cout << "Entre com o numero da conta (-1 para terminar): ";
        cin >> account;
    }   
}