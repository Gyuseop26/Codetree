#include <iostream>
using namespace std;

int main() {
    int count_arr[10] ={0}, sum = 0, A, B;
    
    cin >> A >> B;

    while(true){
        A /= B;
        count_arr[A % B]++;

        if (A <= 1) break;
    }

    for (int i = 0; i < 10; i++){
        sum += count_arr[i] * count_arr[i];
    }

    cout << sum;
    return 0;
}