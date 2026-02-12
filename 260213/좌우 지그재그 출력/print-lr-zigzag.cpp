#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            int mask_j = (i%2 == 0) ? j : (n - 1 - j); // 행에 따른 반전된 j값 사용
            
            cout << n * i + mask_j + 1 << (j == n-1 ? "" : " ");
        }
        cout <<"\n";
    }
    return 0;
}