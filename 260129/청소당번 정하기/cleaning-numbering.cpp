#include <iostream>
using namespace std;

int main() {
    int n, cnt_classroom = 0, cnt_hallway = 0, cnt_toilet = 0;
    cin >> n;
    for (int i = 1; i <= n; i++){
        if (!(i % 12)) cnt_toilet++;

        else if (!(i % 3)) cnt_hallway++;

        else if (!(i % 2)) cnt_classroom++;
    }
    cout << cnt_classroom << ' ' << cnt_hallway << ' ' << cnt_toilet;
    return 0;
}