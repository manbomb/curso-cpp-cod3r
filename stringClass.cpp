#include <iostream>

using namespace std;

int main() {
    string name = "Sergio";
    string lastName("Avilla");
    string manyPoints(10, '.');
    
    cout << name << endl;
    cout << lastName << endl;
    cout << manyPoints << endl;
    
    cout << lastName.back() << endl;
    cout << lastName.size() << endl;
    
    manyPoints.append("??");
    
    cout << manyPoints << endl;
}
