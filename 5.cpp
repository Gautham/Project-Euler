#include <iostream>
using namespace std;

int GCD(int p, int q) {
	if (p < q) return GCD(q, p);
	while (p % q != 0) {
		int t = p % q;
		p = q;
		q = t;
	}
	return q;
}

int main() {
	long t = 2520;
	for (int i = 11; i <= 20; ++i) t *= i / GCD(t, i);
	cout<<t;
}