// pointers.cpp
// demonstrate some features of pointers in conjunction with lecture
// Diane R11

#include <iostream>
    using std::cout;
    using std::cin;
    using std::endl;
#include <array>
    using std::array;

int main()
{
    int yValue{5};
    int *yPtr{nullptr};

    cout << "yValue = " << yValue << "\nyPtr = " << yPtr << "\n*yPtr = " << &yPtr << endl;

    yPtr = &yValue;

    cout << "after yPtr = &yValue;\n ";

    cout << "yValue = " << yValue << "\nyPtr = " << yPtr << "\n&yPtr = " << &yPtr << endl;

    cout << yPtr << " is the address of yValue in memory\n";
    cout << *yPtr << endl;

    //pointer math
    int vArray[5] = {30, 31, 32, 33, 34};
    int* vArrayPtr1{vArray}; // a built in array's name automatically dereferences to element 0.
    int* vArrayPtr2{&vArray[0]};

    cout << vArrayPtr1 << "    " << vArrayPtr2 << endl;

    cout << *vArrayPtr1 << "    " << *vArrayPtr2 << endl;

    for(int i = 0; i < 5; i++)
    {
        cout << *(vArrayPtr1 + i) << "   ";
    }

    cout << endl;

    for(int i = 0; i < 5; i++, ++vArrayPtr1)
    {
        cout << *(vArrayPtr1) << "   ";
    }
    std::cout << std::endl;
   
    return 0;
}




