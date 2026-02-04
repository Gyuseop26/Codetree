#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    // for (int i = 0; i < n; i++){
    //     string star = string(n - i, '*');
    //     string empty = string(2 * i, ' ');
        
    //     cout << star<< empty << star;

    //     cout << "\n";
    // }
    for (int i = 0; i < n; i ++){
        for (int j = 0; j < n - i; j ++) cout << '*';

        for (int j = 0; j < 2 * i; j++) cout << ' ';

        for (int j = 0; j < n - i; j ++) cout << '*';

        cout << "\n";
    }
    return 0;
}