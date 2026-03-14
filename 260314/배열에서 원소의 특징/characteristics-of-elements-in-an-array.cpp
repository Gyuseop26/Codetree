#include <iostream>
using namespace std;

int main() {
    int arr[10], i;
    for (i = 0; i< 10; i++){
        cin >> arr[i];
        if (arr[i] % 3 == 0) break;
    }
    cout << arr[i-1];
    return 0;
}