#include <iostream>
#include <string>
using namespace std;

int main() {
    // Part 1: Verify basic output
    cout << "🎉 VS Code C++ Test Successful!\n";
    cout << "-----------------------------\n";

    // Part 2: Verify input
    string name;
    cout << "Enter your name: ";
    getline(cin, name);
    cout << "Hello, " << name << "!\n";

    // Part 3: Verify calculations
    int a = 5, b = 3;
    cout << "\nMath Test: " << a << " + " << b << " = " << a + b << endl;

    // Part 4: Verify loop
    cout << "\nCountdown:\n";
    for (int i = 3; i > 0; i--) {
        cout << i << "...\n";
    }
    cout << "🚀 Launch!\n";

    return 0;
}