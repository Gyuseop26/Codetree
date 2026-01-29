#include <iostream>
using namespace std;

int main() {
    int N, i = 1;
    cin >> N;

    while (i <= N){
        if (!(i%3)) cout << 0 << ' ';

        else { //3 또는 6 또는 9가 있는지 문자열로 바꿔서 하나씩 확인.
            bool has369 = false;
            string S = to_string(i);
            
            for (int j = 0; j < S.length(); j++){
                if (S[j] == '3' || S[j] == '6' || S[j] == '9') {
                    has369 = true;
                    break;
                    //3 또는 6 또는 9가 한 번이라도 발견이 되면 바로 스탑.
                }
            }
            has369 ? cout << 0 << ' ' : cout << i << ' ';
        }
        i++;
    }

    return 0;
}
// 문자열 전환 없이 산수로만 푸는 방법
// else {
//     int temp = i;
//     has369 = false;
//     while (temp > 0){
//         int R = temp % 10; // 10으로 나눈 나머지. 즉, 일의 자릿수를 확인
        
//         if (R == 3 || R == 6 || R == 9){
//             has369 =true;
//             break;
//         }
//         temp /= 10; //나머지를 잘라낸 나머지 수들만 다시 확인
//     }
//     has369 ? cout << 0 << ' ' : cout << i << ' ';
// }