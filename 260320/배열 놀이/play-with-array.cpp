#include <iostream>
using namespace std;

int main() {
    int N, Q;
    cin >> N >> Q; //

    int arr[101] = {0}; 
    
    for (int i = 1; i <= N; i++) {
        cin >> arr[i];
    }

    for (int j = 0; j < Q; j++) {
        int question_num;
        cin >> question_num;
        
        switch (question_num) {
            
            case 1: {
                int a;
                cin >> a;
                cout << arr[a] << "\n";
                break;
            }
            
            case 2: {
                int b; 
                cin >> b;
                
                int idx = 0;
                for (int k = 1; k <= N; k++) {
                    if (arr[k] == b) {
                        idx = k;
                        break;
                    }
                }
                cout << idx << "\n"; 
                break;
            }
            
            case 3: {
                int s, e;
                cin >> s >> e;
                for (int q = s; q <= e; q++) {
                    cout << arr[q] << " ";
                }
                cout << "\n";
                break;
            }
        }
    }
    return 0;
}