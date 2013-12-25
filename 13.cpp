#include <iostream>
#include <fstream>
using namespace std;

int main() {
	int i, j, carry = 0;
	char A[51], Sum[53];
	for (i = 0; i < 53; ++i) Sum[i] = 0;
	ifstream f;
	f.open("13.txt");
	for (j = 0; j < 100; ++j) {
		f>>A;
		for (i = 49; i >= 0; --i) {
			Sum[i + 2] += A[i] - 48 + carry;
			carry = Sum[i + 2] / 10;
			Sum[i + 2] %= 10;
		}
		while (carry != 0) {
			Sum[i + 2] += carry;
			carry = Sum[i + 2] / 10;
			Sum[i + 2] %= 10;
			--i;
		}
	}
	for (i = 0; i < 10; ++i) cout<<(int)Sum[i];
}