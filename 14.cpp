#include <iostream>
using namespace std;

long A[1001], p;

int getChainLength(long n) {
	long q = 0, E = n;
	if (E <= p) return A[E];
	else while (E > p) {
		if (E % 2) E = 3 * E + 1;
		else E /= 2;
		++q;
	}
	if (n < 1001) {
		A[n] = q + A[E];
	}
	return q + A[E];
}

int main() {
	A[1] = 1, p = 1;
	int t, u, i, j, max = 0;
	for (i = 2; i < 1000000; ++i) {
		int t = getChainLength(i);
		if (t > max) {
			max = t;
			u = i;
		}
	}
	cout<<u;
}