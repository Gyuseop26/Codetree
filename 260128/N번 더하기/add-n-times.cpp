#include <iostream>
using namespace std;

int main() {
    int A, N;
    cin >> A >> N;
    for (int i = 0; i < N; i++) {
        cout << A + N << "\n";
        A += N;
    }
    return 0;
}