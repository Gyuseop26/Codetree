#include <iostream>
using namespace std;

int main() {
    int arr[10], sum = 0;
    int i = 0;
    while (i < 10){
        cin >> arr[i];
        
        if (arr[i] < 250){
            sum += arr[i];
            i++;
        }
        else break;
    }
    
    cout << fixed;
    cout.precision(1);
    cout << sum << ' ' << float(sum) / i;

    return 0;
}