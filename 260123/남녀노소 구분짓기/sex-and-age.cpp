#include <iostream>
using namespace std;

int main() {
    int gender, age;
    cin >> gender >> age;

    if (gender == 0) age >= 19 ? cout << "MAN" : cout << "BOY";
    else age >= 19 ? cout << "WOMAN" : cout << "GIRL";
    
    return 0;
}