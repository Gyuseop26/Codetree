#include <iostream>
using namespace std;

int main() {
    int a, cnt_3 = 0, cnt_5 = 0;
    for (int i = 0; i < 10; i++){
        cin >> a;

        if (!(a%5)) cnt_5++;
        
        if (!(a%3)) cnt_3++;
    }
    cout << cnt_3 << ' '<< cnt_5;
    return 0;
}