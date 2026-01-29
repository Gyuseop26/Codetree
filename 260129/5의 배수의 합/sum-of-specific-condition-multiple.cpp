#include <iostream>
using namespace std;

int main() {
    int A, B, temp, sum = 0;
    cin >> A >> B;

    if (A >= B) {
        temp = A;
        A = B;
        B = temp;
    }

    for (int i = A; i <= B; i++){
        if (!(i % 5)) sum += i;
    }

    cout << sum;

    return 0;
}