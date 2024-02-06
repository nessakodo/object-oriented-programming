#include <iostream>

// Function to demonstrate a while loop
void whileLoop(int i) {
    std::cout << "While Loop: ";
    while (i <= 5) {
        std::cout << i << " ";
        i++;
    }
    std::cout << std::endl;
}

// Function to demonstrate a do-while loop
void doWhileLoop(int i) {
    std::cout << "Do-While Loop: ";
    do {
        std::cout << i << " ";
        i++;
    } while (i <= 5);
    std::cout << std::endl;
}

// Function to demonstrate a for loop
void forLoop() {
    std::cout << "For Loop: ";
    for (int i = 1; i <= 5; i++) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
}

// Function to demonstrate a switch statement
void switchStatement(int num) {
    std::cout << "Switch Statement: ";
    switch (num) {
        case 1:
            std::cout << "One";
            break;
        case 2:
            std::cout << "Two";
            break;
        case 3:
            std::cout << "Three";
            break;
        default:
            std::cout << "Other";
    }
    std::cout << std::endl;
}

int main() {
    // Example of using a while loop
    whileLoop(1);

    // Example of using a do-while loop
    doWhileLoop(1);

    // Example of using a for loop
    forLoop();

    // Example of using a switch statement
    switchStatement(2);

    return 0;
}
