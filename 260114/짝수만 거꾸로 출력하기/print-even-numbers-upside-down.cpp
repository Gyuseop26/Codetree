#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n];
    
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }

    for (int i = n-1; i >= 0; i--){
        if (!(a[i] % 2)) cout << a[i] << " ";
    }
    return 0;
}
// 계속 헷갈려서 적어두는 for문 특징
// for문에 두 번째 칸은 이 조건이 참인 동안은 반복해~ 라는 뜻이다.
// 뭐가 될때까지 반복해~ 가 아니다. 예를 들어 i == 0이라는 조건을 넣으면
// i가 0 아닌데? -> 종료 이런 흐름이 된다.