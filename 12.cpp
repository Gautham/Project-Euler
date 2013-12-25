#include <iostream>
#include <math.h>
using namespace std;

int noFactors(long n) {
	long t = sqrt(n), p = 2;
	for (int i = 2; i < t; ++i) if (n % i == 0) p += 2;
	if (t * t == n) ++p;
	return p;
}

int main() {
	int i = 20;
	long t = 10 * 21;
	for (; noFactors(t) < 500; ++i, t += i);
	cout<<t;
}