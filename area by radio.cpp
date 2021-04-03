#include <iostream>

using namespace std;

int main()
{
    const double PI = 3.1415;
    double raio;
    
    cout << "Raio: ";
    cin >> raio;
    
    double area = PI*raio*raio;
    cout << endl << "Area: " << area;
}
