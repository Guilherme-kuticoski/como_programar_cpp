#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    int km;
    int totalKm;
    int lt;
    int totalLt;
    double tankAverage;
    double totalAverage;

    totalKm = 0;
    totalLt = 0;

    cout << "Entre com a quilometragem (-1 para sair): ";
    cin >> km;

    while ( km >= 0)
    {
        cout << "Entre com os litros: ";
        cin >> lt;

        totalKm += km;
        totalLt += lt;

        tankAverage = static_cast< double >( km ) / lt; 
        cout << "km/litro deste tanque: " << tankAverage << endl;

        totalAverage = static_cast< double >( totalKm ) / totalLt;
        cout << "Total km/litro: " << totalAverage << endl;

        cout << "Entre com a quilometragem (-1 para sair): ";
        cin >> km;
    }   
}