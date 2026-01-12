#include <iostream>
using namespace std;

int main() {
    int a[10];

    cin >> a[0] >> a[1];

    for (int i = 2; i < 10 ; i++){
        a[i] = a[i - 1] + a[i -2 ];
        if (a[i] >= 10) a[i] -= 10;
    }
    for (int i = 0; i < 10; i++){
        cout << a[i] << " ";
    }
    return 0;
}
// 지금은 이렇게 int n을 먼저 선언하고, n의 개수를 입력 받아서 arr을 만들었지만, 
// 안전하게 배열을 만들고 사용하려면, 문제에서 제시한 최대값 100을 사용해주는 게 좋다.
// 예를 들어, int arr[100]; 으로 100 칸 짜리 배열을 만들고 cin으로 입력 받아서
// 값을 덮어 씌워주고, 출력은 내가 원하는 데까지만 출력하면 된다.
