#include <iostream>
using namespace std;

int main() {
    int mid_term, final_term;

    cin >> mid_term >> final_term;

    if (mid_term >= 90){
        if (final_term >= 95) cout << 100000;
        else if (final_term >= 90) cout << 50000;
    }

    else cout << 0;

    return 0;
}