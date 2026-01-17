#include <iostream>
using namespace std;

int main() {
    int N, M, value;
    cin >> N >> M;
    
int arr[N][M];

    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            cin >> arr[i][j];
        }
    }

    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            cin >> value;
            
            if (arr[i][j] == value) arr[i][j] = 0;
            else arr[i][j] = 1;
            
            cout << arr[i][j] << " "; 
        }
        cout << "\n" ;
    }
    return 0;
}