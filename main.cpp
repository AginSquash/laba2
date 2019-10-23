#include <iostream>
#include <string>

using namespace std;
int main() {
    cout << "Введите число " << endl;
    string value;
    cin >> value;
    if ( value.find("777") != value.npos ){
        cout << "Содержится" << endl;
    } else
    {
        cout << "Не содержится" << endl;
    }
    return 0;
}