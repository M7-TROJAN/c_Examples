
// Christmas Tree Printer
#include <iostream>

int main()
{
    int height = 0;

    // ask the user for the height of the tree, store it into height
    std::cout << "Enter height: ";
    std::cin >> height;
    std::cout << "\n";

    for (int i = 1; i <= height; i++)
    {
        int starCount = (i * 2) - 1;

        int spaceCount = height - i + 1;

        // print out the spaces
        for (int j = 0; j < spaceCount; j++)
            std::cout << " ";

        // print out the stars
        for (int j = 0; j < starCount; j++)
            std::cout << "*";

        // print out a new line so the next line of stars starts on a new line
        std::cout << "\n";
    }

    // creates a 3 star "trunk" for the tree, at the center of the tree
    for (int i = 0; i < 3; i++)
    {
        // print out enough spaces to reach the center of the tree
        for (int j = 0; j < height; j++)
            std::cout << " ";

        // stars on a another line
        std::cout << "*\n";
    }

    return 0;
}

/*
          *
         ***
        *****
       *******
          *
          *
*/