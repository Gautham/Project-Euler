#include <iostream>
#include <math.h>

using namespace std;


int main() {
	for (int i = 3; i < 333; ++i)
		for (int j = i + 1; j < 500; ++j) {
			int p = i * i + j * j;
			int q = sqrt(p);
			if (q * q == p && (i + j + q == 1000)) cout<<i * j * q;
		}
}