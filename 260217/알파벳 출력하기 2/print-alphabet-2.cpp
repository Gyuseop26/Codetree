#include <iostream>
using namespace std;

int main() {
    int n, cnt = 65;
    string num, empty;
    cin >> n;
    for (int i = 1; i <= n; i++){
        empty = string(2 * (i - 1), ' ');
        num += empty;
        for (int j = 1; j <= n - (i -1); j++){
            num += char(cnt);
            num += (j ==  (n - (i -1)) ? "\n" : " ");
            // 문자로 바꾼 char(cnt)와 줄바꿈 문자를 + 연산자로 합치면 이상한 문자가 출력될 수 있다.
            // char(cnt)는 내부적으로 숫자를 갖기에 문자열 리터럴과 합쳐지면 메모리 주소로 바뀐다.
            cnt++;
            
            if (cnt > int('Z')) cnt = 65;
        }
    }
    cout << num;
    return 0;
}