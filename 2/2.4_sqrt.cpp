//
// Created by 孙松 on 16/8/13.
//

#include <iostream>
#include <cmath>

int main() {
    using namespace std;

    double area;
    cout << "Enter the floor area, in square feet, of your home: ";
    cin >> area;

    double side;
    side = sqrt(area);

    cout << "That's the equivalent of a square " << side
         << " feet to the side." << endl;

    cout << "How fascinating!" << endl;
    return 0;
}