#include <iostream>
using std::cout;
using std::cin;
using std::endl;

double PI = 3.14159;

int main()
{
    double r;
    double diametro;
    double circunf;
    double area;

    cout << "Digite a medida do raio: ";
    cin >> r;

    diametro = 2*r;
    cout << "Diâmetro: " << diametro << endl;

    circunf = PI*diametro;
    cout << "Circuferencia: " << circunf << endl;

    area = PI*(r*r);
    cout << "Area: " << area << endl;
}
