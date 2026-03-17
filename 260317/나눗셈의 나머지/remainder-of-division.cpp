#include <iostream>
using namespace std;

int main() {
    int count_arr[1000] = {0}, sum = 0, A, B;
    
    cin >> A >> B;

    while(A > 1){
        count_arr[A % B]++;
        A /= B;
    }

    for (int i = 0; i < 1000; i++){
        if (count_arr[i] > 0){
            sum += count_arr[i] * count_arr[i];
        }
    }

    cout << sum;
    return 0;
}