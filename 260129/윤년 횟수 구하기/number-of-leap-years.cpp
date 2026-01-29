#include <iostream>
using namespace std;

int main() {
    int n, cnt = 0;
    cin >> n;
    for (int i = 1; i <=n; i++){
        
        if (!(i%4)){
            
            if(!(i%100) && (i%400)) continue;

            else cnt++;
        }

    }
    cout << cnt;
    return 0;
}