#include <iostream>
using namespace std;

int main() {
    char word[6] = {'L', 'E', 'B', 'R', 'O', 'S'};
    char W;
    int idx = -1;

    cin >> W;

    for (int i = 0; i < 6; i++){
        if(word[i] == W) idx = i;
    }
    
    if (idx == -1) cout << "None";
    else cout << idx; 
    return 0;
}