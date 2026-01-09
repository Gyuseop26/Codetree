#include <iostream>
using namespace std;

int main() {
    int water;
    cin >> water;
    if (water < 0) 
        cout << "ice";
    else if (water >= 100)
        cout << "vapor";
    else
        cout << "water";
    return 0;
}