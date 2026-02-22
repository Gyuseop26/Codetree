#include <iostream>
using namespace std;

int main() {
    int n;
    string prime_num = "";
    cin >> n;
    for (int i = 2; i <= n; i++){
        int cnt = 0;
        for (int j = 1; j <= i; j++){
            if (i % j == 0) cnt ++;
        }
        if (cnt == 2) prime_num += to_string(i) + (i != n ? " " : "");
    }
    cout << prime_num;
    return 0;
}