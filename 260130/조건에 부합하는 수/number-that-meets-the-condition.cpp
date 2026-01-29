#include <iostream>
using namespace std;

int main() {
    int A;
    cin >> A;
    for (int i = 1; i <= A; i++){
        if (!(i%2) && (i%4)) continue;

        if (!((i/8)%2)) continue;

        if (i % 7 < 4) continue;

        cout << i << ' ';
    }
    return 0;
}