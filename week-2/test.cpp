#include <iostream>


int main()

{
        //declare variables
        int count = 0;
        float average = 0;
        int input = 0;

    while (input != 99) {
        std::cout << 'Enter a grade to count (press 99 to exit) : \n' ;
        std::cin >> input;
        
        if (input != -99 )
            {        
            average += input;
            ++ count;}
    }

    std::cout << "quiz average: " << average/count << std::endl;

    return 0;
}

 