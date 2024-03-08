#include <iostream>
#include <cstdlib>
#include <vector>
#include <array>

using std::vector;
using std::array;
using std::string;

using std::cin;
using std::cout;
using std::endl;

int main()
cd 
{

    // Vectors

    vector<int> myInts;
    // vector<int> myInts(10);
    // vector<int> myInts(10, "None"); // experiment with string vector

    myInts.push_back(42);
    myInts.push_back(2);
    myInts.push_back(22);
    myInts.push_back(25);
    myInts.push_back(9);
    myInts.push_back(1);
    myInts.push_back(88);
    myInts.push_back(11);

    int num;

    // cout << "enter an index number: (0-7)";
    // cin >> num;

    // cout << "myInts index number " << num << ": " << myInts[num] << endl;

    cout << "Printout of Vector\n";

    for (int i=0; i < myInts.size(); i++)
    {
        cout << "myInts at index [" << i << "]: " << myInts[i] << endl;
    }

    // Arrays

    array<string , 10> myArray = {"Boo!", "Hi", "there", "is", "snow", "coming"};

    myArray[1] = "Hi";
    myArray[2] = "How";
    myArray[3] = "Are";
    myArray[4] = "You";

    int i = 0;
    cout << "Printout of Array";
    for(auto &current : myArray) // auto matches type
    // for(string& current : myArray) // current = myArray[i]
    {
        // cout << "myArray at index [" << i << "]: " << myArray[i] << endl;
        cout << "myArray at index [" << i++ << "]: " << current << endl;
    };


    return 0;
}

// sizeof = bytes size = elements