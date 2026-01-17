#include <iostream>
using namespace std;

int main() {
    int n;

    cin >> n;
    int row[n];

    for(int i = 0; i < n; i++){
        int cnt = 1;
        
        for(int j = 0; j < n; j++){
            row[j] = cnt;
            cnt +=1;
        }
        for (int j = 0; j < n; j++){
            
            if (i % 2 != 0) cout << row[n - j - 1]; 
            else cout << row[j];
        }
        cout << "\n";
    }
    return 0;
}