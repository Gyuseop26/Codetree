#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    if ((N % 2 != 0 && N % 3 == 0) || (N % 2 == 0 && N % 5 == 0))
        cout << "true";
    else cout << "false";
    return 0;
}
// 다른 사람들 코드 보면서 알아뒀으면 하는 거 정리
// 배수를 표현할 때 N % 2 == 0 이렇게 쓰지 않고 !(N % 2) 이런식으로도 쓸 수 있음.
// !는 반대로 뒤집는 Not 연산자.
// C++은 0은 모두 거짓으로 보고, 0이 아닌 숫자는 모두 참으로 본다.