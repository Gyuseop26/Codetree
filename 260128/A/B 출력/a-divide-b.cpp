#include <iostream>
using namespace std;

int main() {
    int A, B, temp;
    cin >> A >> B;
    temp = A % B;
    
    cout << A/B << '.';
    
    for (int i = 0; i< 20; i++){
        cout << temp * 10 / B;
        
        temp = (temp * 10) % B;
    }
    return 0;
}