#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < 2; i++){
        for(int j = 0; j < n; j++){
            for(int k = 0; k < n; k++){
                cout << '*';
            }
            cout << "\n";
        }
        cout << "\n";
    }

    // string 생성자를 활용한 방법.
    // string line = string(n , '*'); // 미리 만들어두기. '*' 글자 하나를 n번 복사하겠다. 라는 뜻
    // for (int i = 0; i < 2; i++){
    //     for (int j = 0; j < n; j++){
    //         cout << line << "\n";
    //     }
    //     cout << "\n";
    // }
    return 0;
}