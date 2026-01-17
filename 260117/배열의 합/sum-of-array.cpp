#include <iostream>
using namespace std;

int main() {
    int arr[4][4], total;

    for (int i = 0; i < 4; i++){
        total = 0;
        for (int j = 0; j < 4; j++){
            cin >> arr[i][j];
            total += arr[i][j];

        }
        cout << total << "\n";
    }
    return 0;
}