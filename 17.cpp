#include <iostream>
using namespace std;


int units[20] = { 0, 3, 3, 5, 4, 4, 3, 5, 5, 4, 3, 6, 6, 8, 8, 7, 7, 9, 8, 8 }, Tens[10] = { 0, 3, 6, 6, 5, 5, 5, 7, 6, 6 };

int getLength(int i) {
	if (i == 1000) return (units[1] + 8);
	int len = 0;
	if (i >= 100) {
		len += 7 + units[i / 100];
		i %= 100;
		if (i > 0) len += 3;
	}
	if (i >= 20) {
		len += Tens[i / 10];
		i %= 10;
	}
	if (i != 0) {
		len += units[i];
	}
	return len;
}


int main() {
	int sum = 0;
	for (int i = 1; i <= 1000; sum += getLength(i), ++i);
	cout<<sum;
}