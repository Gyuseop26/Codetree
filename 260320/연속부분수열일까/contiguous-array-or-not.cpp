#include <iostream>
using namespace std;

int main() {
    int N1, N2;
    cin >> N1 >> N2;

    int A[100], B[100];
    for (int i = 0; i < N1; i++) cin >> A[i];
    for (int j = 0; j < N2; j++) cin >> B[j];

    bool flag = false;
    for (int i = 0; i <= N1 - N2 ; i++){
        
        bool match = true;
        for (int j = 0; j < N2; j++){
            
            if (A[i+j] != B[j]){
                match = false;
                break;
            }

        }

        if(match) {
            flag = true;
            break;
        }
    
    }
    cout << (flag == true ? "Yes" : "No");
    return 0;
}
