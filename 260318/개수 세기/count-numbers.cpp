#include <iostream>
using namespace std;

int main() {
    int N, M, num, cnt = 0;
    cin >> N >> M;

    for (int i = 0; i < N; i++){
        cin >> num;
        if (num == M) cnt++;
    }

    cout << cnt;

    return 0;
}