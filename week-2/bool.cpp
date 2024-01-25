#include <iostream>


int main()

{
        //declare variables
        int count = 0;
        float average = 0;
        int input = 0;
        bool sentinel = false;

        while (sentinel == false) 
        {
        std::cout << "Enter a grade to count (99 to exit) : \n";
        std::cin >> input;
        if (input == -99)// if input = 99 then exit 
            {   
                sentinel = true;     
        }
        else 
        {
            average += input;// average = average + input
            ++ count;// 
        }
}

    std::cout << "quiz average: " << average/count << std::endl;
    return 0;
}

 