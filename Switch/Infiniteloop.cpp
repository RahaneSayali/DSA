// if we want to come out of switch case from a infinite loop without using break 

#include <iostream>
using namespace std;

int main()
{
    bool exitLoop = false;

    while (!exitLoop)
    {
        int choice;

        // Your switch case
        switch (choice)
        {
        case 1:
            // Do something for case 1
            break;
        case 2:
            // Do something for case 2
            break;
        case 3:
            // If you want to exit both the switch and the loop
            // based on a condition, set the exitLoop flag to true
            if (condition)
            {
                exitLoop = true;
            }
            break;
        default:
            // Handle default case
            break;
        }

        // Your other loop logic here
    }

    return 0;
}
