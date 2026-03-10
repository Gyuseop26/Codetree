#include <iostream>
using namespace std;

int main() {
    int n, cnt = 0, arr[100];
    cin >> n;
    
    for (int i = 0; i < n; i++){
        int num;
        cin >> num;
        
        if (num%2 == 0) {
            arr[cnt] = num;
            cnt++;
        }
    }

    for (int j = cnt - 1; j >= 0; j--){
        cout << arr[j] << ' ';
    }

    return 0;
}