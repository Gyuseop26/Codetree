#include <iostream>
using namespace std;

int main() {
    int A, B, sum =0;
    cin >> A >> B;
    
    for (int i = A; i <= B; i++){
        if (!(i % 6) && (i % 8)) sum += i;
    }
    cout << sum;
    return 0;
}