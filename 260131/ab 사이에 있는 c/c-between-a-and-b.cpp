#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    bool baesu = false;

    cin >> a >> b >> c;

    for (int i = a; i <= b; i++){
        
        if (!(i%c)) {
            baesu = true;
            break;
        }
    }

    cout << (baesu ? "YES" : "NO");
    
    //반복문 없는 수학적 풀이
    // int baesu_C = b/c - (a-1)/c;
    // cout << (baesu_C > 0 ? "YES" : "NO");
   
    return 0;
}