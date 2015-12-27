#include <iostream>
#include "MaxXor.h"
using namespace std;

void maxXor() {
    int testCases;
    cin >> testCases;

    for (int i = 0; i < testCases; ++i) {
        unsigned int currentTest;
        cin >> currentTest;
        cout << (~currentTest) << endl;
    }
}
