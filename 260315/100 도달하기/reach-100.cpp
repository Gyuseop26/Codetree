#include <iostream>
using namespace std;

int main() {
    int n, arr[100], cnt = 2;
    cin >> n;
    arr[0] = 1;
    arr[1] = n;
    
    for (int i = 2; i < 100; i++){
        arr[i] = arr[i-2] + arr[i-1];
        if (arr[i] >= 100) break;
        cnt++;
    }

    for (int i = 0; i < cnt + 1; i++){
        cout << arr[i] << ' ';
    }

    return 0;
}