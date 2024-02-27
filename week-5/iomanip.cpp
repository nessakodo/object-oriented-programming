#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    cout << "Enter an integer: ";
    
    int num = 0;
    cin >> num;

    // Print formatted output with spaces
    cout << setw(5) << num << "     " << setw(10) << setprecision(6) << sqrt(num) << "     " << setw(5) << pow(num, 2) << endl;

    return 0;
}
