#include <iostream>
#include <math.h>
using namespace std;

int isPrime(long n) {
	int t = sqrt(n);
	if (n == 2) return 1;
	if (n % 2 == 0) return 1;
	for (int i = 3; i <= t; i += 2) if (n % i == 0) return 0;
	return 1;
}

int main() {
	long n = 6;
	bool flag = false;
	for (int i = 3; n < 10001; ++i) {
		if (isPrime(6 * i - 1)) if (++n == 10001) cout<<6 * i - 1;
		if (isPrime(6 * i + 1)) if (++n == 10001) cout<<6 * i + 1;
	}
}
