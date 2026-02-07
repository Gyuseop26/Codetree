#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < 2 * n; i++){
        // k를 반사 인덱스라고 생각하기, 전체는 2n-1 행을 갖지만, k는 n개까지만 생각하기
        // i가 n보다 작으면 k는 i 그대로 따라가고, 커지면 반사되는 인덱스 따라가기
        int k = (i < n ? i : (2 * n - 1 - i));
        
        int star = (k % 2 == 0 ? (k/2 + 1) : (n - k/2));
        
        for (int j = 0; j < star; j++){
            cout << '*' << (j == star - 1 ? "" : " ");
        }

        cout << "\n";
        
        // if (!(k%2)){
        //     for (int j = 0; j < k/2 + 1; j++){
        //         cout << '*' << (j == k/2 ? "": " ");
        //     }
        // }

        // else {
        //     for (int j = 0; j < n - k/2; j++){
        //         cout << '*' << (j == n - k/2 - 1 ? "": " ");
        //     }
        // }
        // cout << "\n";

    }
    return 0;
}