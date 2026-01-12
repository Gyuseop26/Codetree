#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    for (int i = 0; i < n; i++){
        cout << arr[i] * arr[i] << " ";
    }

    return 0;
}
// 이번 문제에서는 입력받는 정수들이 0 ~ 9까지로 최대 값이 18이니까
// -=10이 가능. 하지만 일의 자리를 구하는 문제에서는 %10을 더 많이 쓴다.
// if (a[i] >= 10) a[i] -= 10; 이 부분을
// a[i] = (a[i - 1] + a[i - 2]) % 10; 이렇게 수정할 수 있다.
