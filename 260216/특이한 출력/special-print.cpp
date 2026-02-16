#include <iostream>
using namespace std;

int main() {
    int n;
    string num;
    cin >> n;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <=n; j++){
            num += "("+ to_string(i) + ", " + to_string(j) + ")";
            num += ((i+j)%4 == 0 ? "\n" : " ");
        }
    }
    cout << num;
    return 0;
}