#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    int num = 0;
    
    while (true) {
        cout << "Enter an integer (-1 to exit): ";
        cin >> num;

        if (num == -1) // Check if the sentinel value is entered
            break;

        // Print formatted output with spaces
        cout << setw(5) << num << "     " << setw(10) << setprecision(6) << sqrt(num) << "     " << setw(5) << pow(num, 2) << endl;
    }

    return 0;
}
