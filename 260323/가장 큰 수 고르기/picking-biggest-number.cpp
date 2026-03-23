#include <iostream>
#include <climits>
using namespace std;

int main() {

	int arr[10] = {0};

	int max_val = INT_MIN;
	for (int i = 0; i < 10; i++) {
        cin >> arr[i];
		
        if (arr[i] > max_val) {
			max_val = arr[i];
		}
	}

	cout << max_val;
	return 0;

}
