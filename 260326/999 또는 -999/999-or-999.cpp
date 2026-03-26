#include <iostream>
#include <climits>
using namespace std;

int main() {
    int max_val = INT_MIN, min_val = INT_MAX;
    int num;

    for (int i = 0; i < 100; i++){
        cin >> num;
        if(num == 999 || num == -999) break;

        if (num > max_val) max_val = num;

        if (num < min_val) min_val = num;
    }

    cout << max_val << ' ' << min_val;
    return 0;
}