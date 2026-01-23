#include <iostream>
using namespace std;

int main() {
    int temp, cnt = 0;
    char symp;

    for (int i = 0; i < 3; i++){
        cin >> symp >> temp;
        if (symp == 'Y' && temp >= 37) cnt++;

        if (cnt >= 2) break;
    }

    cout << (cnt >= 2 ? 'E' : 'N');
    return 0;
}