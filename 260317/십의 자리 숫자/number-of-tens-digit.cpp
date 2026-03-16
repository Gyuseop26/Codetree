#include <iostream>
using namespace std;

int main() {
    int count_num[10] = {0, }, num;
    while(true){
        cin >> num;
        if (num == 0) break;
        
        count_num[num / 10]++;
    }

    for (int j = 1; j < 10; j++){
        cout << j <<" - " << count_num[j] << "\n";
    }
    return 0;
}