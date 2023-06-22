#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void squares() {
	for (int i = 10; i <= 20;) {
		cout << "square of " << i << " equals " << i * i << endl;
		++i;
	}
}

void sum_numbers() {
	int num{};
	int sum = 0;
	cout << "Write the number >> ";
	cin >> num;
	for (int i = 1; i <= num;) {
		sum = sum + i;
		if (i == num)
			cout << sum << endl;
		++i;
	}
}

void divide() {
	int num, div;
	vector<int> vect = {};
	cout << "Write the number >> ";
	cin >> num;
	for (int i = 1; i <= num; i++) {
		if (num % i == 0) {
			div = num / i;
			vect.insert(vect.end(), div);
		}
		if (i == num) {
			sort(vect.begin(), vect.end());
			for (int a = 0; a < vect.size(); ++a) {
				cout << vect[a] << endl;
			}
			break;
		}
	}
}

int main() {
	squares();
	sum_numbers();
	divide();
}