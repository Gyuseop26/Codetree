#include <iostream>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;
    for (int i = 1; i <= A; i++){
        string line ="";
        for (int j = 1; j <= B; j++){
            line += to_string(i * j) + (j == B ? "" : " ");
        }
        cout << line << "\n";
    }
    return 0;
}