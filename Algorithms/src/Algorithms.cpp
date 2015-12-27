#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int testCases;
	cin >> testCases;

	for (int i = 0; i < testCases; ++i) {
		unsigned int currentTest;
		cin >> currentTest;
		cout << (~currentTest) << endl;
	}
	return 0;
}
