#include <iostream>
#include <climits>
using namespace std;

int main() {
    int arr[100] ={0};
    int n, cnt = 0;
    int min_val = INT_MAX;
    
    cin >> n;
    for (int i = 0; i < n; i++){ //최소값을 정하는 부분
        cin >> arr[i];
        if (arr[i] < min_val){
            min_val = arr[i];
            cnt = 1; // 새로운 최소값이 나오면 1부터 다시 세기.
        }
        else if(min_val == arr[i]){
            cnt++;
        }
    }

    cout << min_val << ' ' << cnt;

    return 0;
}