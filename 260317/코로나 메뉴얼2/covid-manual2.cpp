#include <iostream>
using namespace std;

int main() {
    int covid[4] = {0}, emergency_count = 2;
    double temp, fever_threshold = 37.0;
    char symp;

    for (int i = 0; i < 3; i++){
        cin >> symp >> temp;

        int index = (symp == 'Y' ? 0 : 1) + (temp >= fever_threshold ? 0 : 2);
        covid[index]++;
    }

    for (int j = 0; j < 4; j++){
        cout << covid[j] << ' ';
    }

    cout <<(covid[0] >= emergency_count ? "E" : "");
    return 0;
}