// receives: input from user 
// returns: printed formatted integer

// int, 5 spaces, square root (set precision to 6), 5 spaces, int^2


#include <cmath>
#include <iomanip>
#include <iostream>

using namespace std;

int main() {

  cout << "Enter an integer: "; 

  int num = 0;
  cin >> num;

   
  // formatted output
  cout << setw(5) << num << "     " << setw(10) << setprecision(6) << sqrt(num) << "     " << setw(5) << pow(num, 2) << endl; 

  return 0;
}