#include <iostream>
using namespace std;

int main() {
    int arr[10], even_num = 0, avg_3 = 0, cnt = 0;
    for (int i = 0; i < 10; i++){
        cin >> arr[i];
        
        if((i+1)%2 == 0) even_num += arr[i];
        
        if((i+1)%3 == 0) {
            avg_3 += arr[i];
            cnt++;
        }
    }
    
    cout << fixed;
    cout.precision(1);
    cout << even_num << ' ' << double(avg_3)/cnt;
    return 0;
}