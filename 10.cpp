#include <iostream>
#include <math.h>
using namespace std;


int isPrime(long long n) {
	long long t = sqrt(n);
	if (n == 2) return 1;
	if (n % 2 == 0) return 1;
	for (long long i = 3; i <= t; i += 2) if (n % i == 0) return 0;
	return 1;
}

int main() {
	long long sum = 17;
	for (long long t = 12; t < 2000000; t += 6) {
		if (t < 2000001) { if (isPrime(t - 1)) sum += t - 1; }
		else t = 2000001;
		if (t < 1999999) { if (isPrime(t + 1)) sum += t + 1; }
		else t = 2000001;
	}
	cout<<sum;
}