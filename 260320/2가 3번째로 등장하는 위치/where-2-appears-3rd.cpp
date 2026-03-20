#include <iostream>
using namespace std;

int main() {
    int n, cnt = 0;
    int arr[100];
    cin >> n;
    for (int i = 1; i <= n; i++){
        cin >> arr[i];
        if (arr[i] == 2) cnt++;

        if(cnt == 3){
            cout << i;
            break;
        }
    }

    return 0;
}