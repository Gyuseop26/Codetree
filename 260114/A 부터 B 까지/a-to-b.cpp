#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    while(true){
        cout << a << " ";
        
        if (a % 2) a *= 2 ;

        else a += 3;

        if (a > b) break;
    }
    return 0;
}

// while(true)를 while(a <= b)로 변경해도 됨. 단, 마지막 if 문은 없애야 함.
// 