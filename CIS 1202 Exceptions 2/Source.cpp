// David Roberts
// CIS 1202 101
// 5/2/2022
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

template <class G>
G half(G full) {
	G half = (full / 2);
	return half;
}

int half(int full) {
	// had to do write this with doubles because that was the only
	// way to make the round function work
	double h = full;
	h = h / 2;
	int half = round(h);
	return half;
}

int main() {
	double a = 7.0;
	float b = 5.0f;
	int c = 3;

	cout << half(a) << endl;
	cout << half(b) << endl;
	cout << half(c) << endl;

	cout << endl << endl;
	system("pause");
	return 0;
}