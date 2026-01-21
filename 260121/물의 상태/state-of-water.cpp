#include <iostream>
using namespace std;

int main() {

	int a;

	cin >> a;

	if (a < 0) {
		cout << "ice" << "\n";
	}
	else if (a >= 100) {
		cout << "vapor" << "\n";
	}

	else cout << "water";
	return 0;

}