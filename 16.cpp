#include <iostream>
using namespace std;

int main() {
	int i, j, carry = 0, n = 1, sum = 0, t;
	char A[160];
	for (i = 0; i < 160; ++i) A[i] = 0;
	A[0] = 1;
	for (i = 0; i < 100; ++i) {
		for (j = 0; j < n; ++j) {
			int t = (int)A[j] * 1024 + carry; 
			A[j] = t % 100;
			carry = t / 100;
		}
		while (carry != 0) {
			t = (int)A[j] + carry;
			carry = t / 100;
			A[j] = t % 100;
			++j; ++n;
		}
	}
	for (i = 0; i < n; ++i) sum += (A[i] / 10) + (A[i] % 10);
	cout<<sum;
}