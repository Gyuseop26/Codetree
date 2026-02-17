#include <iostream>
using namespace std;

int main() {
    int n, cnt = 65;
    string num;
    cin >> n;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= i; j++){
            cout << char(cnt) << (j == i ? "\n" : "");
            cnt++;
            if (cnt > int('Z')) cnt = 65;
        }
    }
    return 0;
}