#include <iostream>
using namespace std;

int main() {
    int a, b, c, temp;

    cin >> a >> b >> c;

    a >= b ? temp = a : temp = b;

    temp >= c ? cout << temp : cout << c;
    


    return 0;
}