//
// Created by 孙松 on 16/8/13.
//

# include <iostream>

void simon(int);

int main() {
    using namespace std;
    simon(3);

    cout << "Pick an integer: ";

    int count;
    cin >> count;

    simon(count);
    cout << "Done!" << endl;

    return 0;
}

void simon(int n) {
    using namespace std;
    cout << "Simon says touch your toes " << n << " times." << endl;

    // void functions don't need return statements
}