#include <iostream>
using namespace std;

int main() {
    string text[5] = {"apple", "banana", "grape", "blueberry", "orange"};
    char N;
    int cnt = 0;

    cin >> N;
    
    for(int i = 0; i < 5 ; i++){
        if(text[i][2] == N || text[i][3]== N){
            cout << text[i] << "\n";
            cnt += 1;
        }
    }
    
    cout << cnt ;
    
    return 0;
}

// 지금은 문자들이 주어졌지만, 주어지지 않은 상태에서 입력 받은 문자에
// 몇 번째 자리에 글자를 비교해라~ 와 같으 문제였다면, 위에 같은 조건은
// 버그를 유발할 수 있다. 입력 받은 글자 자릿수가 비교하려는 자릿수 보다 이상인지
// 확인하는 습관을 가지면 좋다.
// if(text[i][2] == N || text[i][3]== N) 만약 이 조건인데 글자가 "it" 이런게 들어오면
// 에러가 날 수 있으니, 
// if(text[i].length() >= 4 && (text[i][2] == N || text[i][3]== N)) 이렇게 쓸 수도 있다.