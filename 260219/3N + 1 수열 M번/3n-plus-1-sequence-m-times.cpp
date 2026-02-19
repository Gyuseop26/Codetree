#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> m;
    for (int i = 0; i < m; i++){
        int cnt = 0;
        cin >> n;
        
        while (true){
            if (n == 1) break;

            if (n%2 == 0){
                n /=2;
                cnt ++;
            }
            else {
                n = n * 3 + 1;
                cnt ++;
            }
        }
        cout << cnt << (i == m-1 ? "" : "\n");
    }
    return 0;
}