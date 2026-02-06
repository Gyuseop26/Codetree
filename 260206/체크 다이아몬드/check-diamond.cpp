#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < 2 * n - 1; i++){
        int dist = abs(n - 1 -i);
        string empty = string(dist, ' ');
        
        cout << empty;

        for (int j = 0; j < n - dist; j++) 
            cout << '*' << (j == n - dist -1 ? "" : " ");
        
        cout << "\n";
    }
    return 0;
}