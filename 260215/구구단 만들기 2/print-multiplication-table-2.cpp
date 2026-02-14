#include <iostream>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;
    for (int i = 2; i <= 8; i += 2){
        string gugudan = "";
        for (int j = B; j >= A; j --){
            gugudan += to_string(j) + " * " + to_string(i) + " = " + to_string(j*i);
            gugudan += (j != A ? " / " : "");
        }
        cout << gugudan << "\n";
    }
    return 0;
}