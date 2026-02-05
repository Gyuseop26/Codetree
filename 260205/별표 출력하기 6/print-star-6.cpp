#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < 2 * n - 1; i++){
        //중심과 떨어진 거리만큼 공백 출력
        for (int j = abs((n-1) - i); j < n-1; j++) cout << "  ";

        for (int j = 0; j < 2 * abs((n-1) - i) + 1; j++) cout << "* ";

        cout << "\n";
    }
    return 0;
}