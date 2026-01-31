#include <iostream>
using namespace std;

int main() {
    int a, b;
    bool flag = false;

    cin >> a >> b;
    for (int i = a; i <= b; i++){
        if(!(1920 % i) && !(2880 % i)){
            flag = true;
            break;
        }
    
    //         if (960%i == 0){
    //         flag = true;
    //             break;
    //     }
    }
    // 수학적 풀이 - 공약수를 찾는 문제에서는 유클리드 호제법을 사용해보자.
    // 유클리드 호제법이란? 두 수 A, B가 있을 때 A > B라면 최대공약수 GCD는
    // GCD(A, B) = GCD(B, R)이다. R은 A를 B로 나눈 나머지. -> 나머지가 0이 될때까지
    // 반복해서 마지막으로 나눈 수가 최대공약수이다.
    //GCD (2880, 1920) = GCD(1920, 960) 즉, 이 문제는 960의 약수인지만 보면 된다.

    cout << (flag ? 1 : 0);
    return 0;
}