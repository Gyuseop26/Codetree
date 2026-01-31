#include <iostream>
using namespace std;

int main() {
    int n;
    bool flag = false;

    cin >> n;

    for (int i = 2; i <= (n-1); i++){
        if(n%i == 0){
            flag = true;
            break;
        }

    }

    //제곱근 활용 방식 (약수는 대칭 성질을 띄고 N의 제곱근 이상을 확인할 필요가 없다.)
    // N 제곱근 보다 작은 수에서 이미 약수들이 발견될 것이기에 그 뒤를 보는 것은 낭비다.
    // for (int i = 2; i * i <= n; i++){
    //     if(n%i == 0){
    //         flag = true;
    //         break;
    //     }
    // }
   
    cout << (flag ? "C" : "N");
    return 0;
}