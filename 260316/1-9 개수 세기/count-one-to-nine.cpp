#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int count_num[10] = {0, }, arr[n];

    for (int i = 0; i < n; i++){
        cin >> arr[i];
        count_num[arr[i]]++;
    }

    for (int j = 1; j < 10; j++){
        cout << count_num[j] << "\n";
    }
    return 0;
}