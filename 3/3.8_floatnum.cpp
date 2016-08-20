//
// Created by 孙松 on 16/8/20.
//

#include <iostream>

int main() {
    using namespace std;

    cout.setf(ios_base::fixed, ios_base::floatfield);

    float tub = 10.0 / 3.0;
    double mint = 10.0 / 3.0;
    const float million = 1.0e6;

    cout << "tub = " << tub;
    cout << ", million tubs = " << million * tub;
    cout << ",\nand ten millions tubs = ";
    cout << 10 * million * tub << endl;

    cout << "mint = " << mint << " and a million mints = ";
    cout << million * mint << endl;

    return 0;
}
