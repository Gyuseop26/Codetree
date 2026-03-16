#include <iostream>
using namespace std;

int main() {
    int count_num[7] = {0, }, dice;
    for (int i = 0; i < 10; i++){
        cin >> dice;
        count_num[dice]++;
    }

    for (int j = 1; j < 7; j++){
        cout << j <<" - " << count_num[j] << "\n";
    }
    return 0;
}