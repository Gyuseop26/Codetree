#include <iostream>
using namespace std;

int main() {
    int age_1, age_2;
    char gender_1, gender_2;

    cin >> age_1 >> gender_1 >> age_2 >> gender_2;

    if (age_1 >= 19 || age_2 >= 19){
        if (gender_1 == 'M' || gender_2 == 'M') cout << 1;
        else cout << 0;
    }
    else cout << 0;
    
    return 0;
}