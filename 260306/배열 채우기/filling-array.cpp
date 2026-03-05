#include <iostream>
using namespace std;

int main() {
    int arr[10], cnt = 0;
    
    for (int i = 0; i < 10; i++){
        cin >> arr[i];
        if (arr[i] == 0) break;
        cnt++;
    }

    for (int j = cnt - 1; j >= 0; j--){
        cout << arr[j] << ' ';
    }


    return 0;
}