#include <iostream>
using namespace std;

int main() {
    int a, b;
    bool flag = false;

    cin >> a >> b;
    for (int i = a; i <= b; i++){
        if(!(1920 % i) && !(2880 % i)){
            flag = true;
            break;
        }
    }
    cout << (flag ? 1 : 0);
    return 0;
}