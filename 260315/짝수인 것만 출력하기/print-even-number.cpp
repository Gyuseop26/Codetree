#include <iostream>
using namespace std;

int main() {
    int n, num, cnt = 0;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++){
        cin >> num;
        
        if (num % 2 ==0) {
            arr[cnt] = num;
            cnt++;
        }
    }

    for (int i = 0; i < cnt; i++){
        cout << arr[i] << (i < cnt - 1 ? " ": "");
    }
    return 0;
}