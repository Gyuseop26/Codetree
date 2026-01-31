#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    bool flag = false;

    cin >> a >> b >> c;

    for (int i = a; i <= b; i++){
        if (!(i%c)) {
            flag = true;
            break;
        }
    }

    // int baesu_count = (b/c) - ((a-1)/c);
    // if(baesu_count >= 1) flag = true;
    
    cout << (flag ? "NO" : "YES");
    return 0;
}