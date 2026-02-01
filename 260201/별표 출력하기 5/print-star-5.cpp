#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    // for (int i = 0; i < n; i++){
    //     string star = string(n - i, '*');
    //     for (int j = 0; j < n - i; j++){
    //         cout << star << " ";
    //     }
    //     cout << "\n";
    // }

    for (int i = 0; i < n; i++){ // 줄 반복
        for (int j = 0; j < n-i; j++){ // 묶음 반복
            for (int k = 0; k < n-i; k++){ // 별 반복
                cout << '*';
            }
            cout << ' ';
        }
        cout << "\n";
    }
    return 0;
}