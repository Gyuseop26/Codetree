#include <iostream>
using namespace std;

int main() {
    int n, cnt = 0;
    cin >> n;
    for (int i = 1; i <= n; i++){
        if((i%2) && (i%3) && (i%5)) cnt ++;
        
    }
    cout << cnt;
    
    //수학적으로 푸는 방법
    // int friendly = (n/2 + n/3 + n/5) - (n/6 + n/10 + n/ 15) + n/30;
    // cout << n - friendly;
    return 0;
}