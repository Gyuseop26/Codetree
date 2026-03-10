#include <iostream>
using namespace std;

int main() {
    int n, sub, cnt = 0;
    cin >> n;

    for (int  i = 0; i < n; i++){
        int sum_sub = 0;
        
        for (int j = 0; j < 4; j++){
            cin >> sub;
            sum_sub += sub;
        }
        if ((double)sum_sub/4 >= 60) {
            cout << "pass" << "\n";
            cnt++;
        }
        else cout << "fail" << "\n";
    }
    cout << cnt;
    return 0;
}