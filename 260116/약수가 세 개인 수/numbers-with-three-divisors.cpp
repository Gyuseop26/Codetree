#include <iostream>

using namespace std;

int st, ed;

int main() {
    cin >> st >> ed;
    int cnt, total_cnt = 0;


    for (int i = st; i <= ed; i++){
        cnt = 0;

        for (int j = 1; j <= i; j++){
            if (i % j == 0) cnt +=1;
        }
        if (cnt == 3) total_cnt +=1;

    }
    cout << total_cnt;

    return 0;
}
