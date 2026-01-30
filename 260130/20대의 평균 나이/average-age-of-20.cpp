#include <iostream>
using namespace std;

int main() {
    int n, sum = 0, cnt = 0;
    while (true){
        cin >> n;
        if (n >= 30 || n <= 19) break;

        else{
            sum += n;
            cnt++;
        }

    }
    cout << fixed;
    cout.precision(2);
    cout << double(sum) / cnt;


    return 0;
}