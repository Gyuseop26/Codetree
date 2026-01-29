#include <iostream>
using namespace std;

int main() {
    int A, B, sum = 0, cnt = 0;
    cin >> A >> B;
    for (int i = A; i <= B; i++){
        
        if (!(i % 5) || !(i % 7)){
            sum += i;
            cnt +=1;
        }

    }
    cout << fixed;
    cout.precision(1);

    cout << sum << ' ' << double(sum)/cnt; 
    // 정수끼리 계산을 하고 형 변환을 하면 의미 없다.
    // 실수로 먼저 형 변환을 하고 계산 해야 소수점 밑 자리가 살아있다. 
    
    return 0;
}