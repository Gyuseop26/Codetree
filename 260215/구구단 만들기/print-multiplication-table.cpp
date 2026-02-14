#include <iostream>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;
    for (int i = 1; i <= 9; i++){
        string gugudan = "";
        for (int j = B; j >= A; j -= 2){
            gugudan += to_string(j) + " * " + to_string(i) + " = " + to_string(j*i);
            gugudan += (j != A ? " / " : "");
        }
        cout << gugudan << "\n";
    }
    return 0;
}