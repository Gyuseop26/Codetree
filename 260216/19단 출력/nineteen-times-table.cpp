#include <iostream>
using namespace std;

int main() {
    string gugudan;
    for (int i = 1; i <= 19; i++){
        for (int j = 1; j <= 19; j++){
            gugudan += to_string(i) + " * " + to_string(j) + " = " + to_string(i*j);
            if (j%2 == 0 || j == 19) gugudan += "\n";
            else gugudan += " / ";
        }
    }
    cout << gugudan;
    return 0;
}