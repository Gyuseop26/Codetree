#include <iostream>
using namespace std;

int main() {
    int arr[4][4], cnt = 0;
    
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            cin >> arr[i][j];
            if (j <= i) cnt += arr[i][j];
        }

    }

    cout << cnt;
     return 0;
}