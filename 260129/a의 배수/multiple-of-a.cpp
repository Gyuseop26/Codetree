#include <iostream>
using namespace std;

int main() {
    int N, a, i = 1;
    cin >> N >> a;

    while (i <= N){
        cout << (!(i%a)) << "\n";
        i++;
    }
    return 0;
}