#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        
        for (int j = 0; j < i; j++) cout << "  ";

        for (int j = 0; j < 2 * (n - i) - 1; j++) {
            cout << "*";
            if (j < 2 * n - 2 - (2 * i)) cout << ' '; // 각 행에 마지막 별 출력시 공백 출력 X
        }

        cout << "\n";
    }
    return 0;
}