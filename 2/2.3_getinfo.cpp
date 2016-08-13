//
// Created by 孙松 on 16/8/13.
//

#include <iostream>

int main() {
    using namespace std;

    int carrots;

    cout << "How many carrots do you have?" << endl;
    cin >> carrots;
    cout << "Here are two more.";
    carrots = carrots + 2;

    // the next line concatenates output
    cout << "Noe you have " << carrots << " carrots." << endl;
    return 0;
}
