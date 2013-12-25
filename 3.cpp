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

int getMaxPrime(long n) {
	long factor = 1, t = sqrt(n);
	if (n % 2 == 0) factor = 2;
	while (n % 2 == 0) n /= 2;
	for (int i = 3; i < t; i += 2) {
		if (n % i == 0) {
			factor = i;
			while (n % i == 0) n /= i;
			t = sqrt(n);
		}
	}
	if (n == 1) return factor;
	else return n;
}

int main() {
	cout<<getMaxPrime((long)600851475143);
}