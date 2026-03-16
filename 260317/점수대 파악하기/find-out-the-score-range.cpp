#include <iostream>
using namespace std;

int main() {
    int count_num[11] = {0, }, num;
    while(true){
        cin >> num;
        if (num == 0) break;
        
        count_num[num / 10]++;
    }

    for (int j = 10; j > 0; j--){
        cout << j * 10 <<" - " << count_num[j] << "\n";
    }
    return 0;
}