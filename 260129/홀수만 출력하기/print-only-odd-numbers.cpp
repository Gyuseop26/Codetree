#include <iostream>
using namespace std;

int main() {
    int N, a, i = 0;
    cin >> N;
    
    while (i < N){
        cin >> a;
        if ((a%2) && !(a%3)) cout << a << "\n";
        i++;
    }
    return 0;
}