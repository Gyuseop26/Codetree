#include <iostream>
using namespace std;

int main() {
    int A, B, total;
    double avg;

    cin >> A >> B;

    total = A + B;
    avg = (double)total/2;

    cout << total << " ";
    
    cout << fixed;
    cout.precision(1);
    cout << avg; 
    return 0;
}