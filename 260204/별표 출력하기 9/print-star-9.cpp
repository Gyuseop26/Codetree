#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        for (int j = n - i; j > 1; j--){
            cout << "  ";
        }
        
        for (int j = 0; j < 2 * i + 1; j++){
            cout << "*";
            if (j < 2 * i) cout << ' ';
        }

        cout << "\n";
    }
    return 0;
}
// 공백을 출력하는 부분에서 for문으로 공백을 출력하는 것도 좋지만, string으로 한 번에 처리해줘도 좋다.
// cout << string(2 * (n - 1 - i), ' ')라고 쓰면 남은 열만큼 공백 찍기 라고 읽힌다.