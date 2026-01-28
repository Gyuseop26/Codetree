#include <iostream>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;

    if (B >= A) {
        for (int i = B; i >= A; i--) cout << i << ' ';
    }
    else if (A > B){
        for (int i = A; i >= B; i--) cout << i << ' ';
    }
    return 0;
}