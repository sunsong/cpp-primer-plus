//
// Created by 孙松 on 16/8/14.
//

#include <iostream>
#define ZERO 0 // makes ZERO symbol for 0 value
#include <climits> // defines INT_MAX as largest int value

int main() {
    using namespace std;
    short sam = SHRT_MAX;
    unsigned short sue = sam;

    cout << "Sam has " << sam << " dollors and Sue has " << sue;
    cout << " dollars deposited." << endl
         << "Add $1 to each account. " << endl << "Now ";

    sam = sam + 1;
    sue = sue + 1;

    cout << "Sam has " << sam << " dollars and Sue has " << sue;
    cout << " dollars deposited.\nPoor Sam!" << endl;

    sam = ZERO;
    sue = ZERO;

    cout << "Sam has " << sam << " dollars and Sue has " << sue;
    cout << " dollars deposited." << endl;
    cout << "Take $1 from each account." << endl << "Now ";

    sam = sam - 1;
    sue = sue - 1;

    cout << "Sam has " << sam << " dollars and Sue has " << sue;
    cout << " dollars deposted." << endl << "Lucky Sue!" << endl;

    return 0;
}
