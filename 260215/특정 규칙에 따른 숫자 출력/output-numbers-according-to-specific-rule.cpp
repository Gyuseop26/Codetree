#include <iostream>
using namespace std;

int main() {
    int n, cnt = 1;
    cin >> n;
    for (int i = n; i >= 1; i--){
        string empty = string(2 * abs(n - i), ' ');
        string num;
        
        for (int j = i; j >= 1; j--){
            num += to_string(cnt) + (j != 1 ? " ": "");
            cnt++;
            if(cnt > 9) cnt = 1;
        }
        
        cout << empty << num << "\n";
    }
    return 0;
}