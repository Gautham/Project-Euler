#include <iostream>
#include <fstream>

using namespace std;


int main() {
	char A[1001];
	int maxPdt = 0, t;
	ifstream f;
	f.open("8.txt");
	f>>A;
	for (int i = 0; i < 996; ++i) {
		t = (A[i] - 48) * (A[i + 1] - 48) * (A[i + 2] - 48) * (A[i + 3] - 48) * (A[i + 4] - 48);
		if (t > maxPdt) maxPdt = t;
	}
	cout<<maxPdt;
}