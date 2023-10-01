//  code that reads the lines from the file and stores them in a vector
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    ifstream myFile;
    string line;
    vector<string> lines;

    myFile.open("myFile.txt", ios::in);

    if (myFile.is_open())
    {
        while (getline(myFile, line))
        {
            lines.push_back(line);
        }

        myFile.close();

        // Display the lines stored in the vector
        for (const auto &line : lines)
        {
            cout << line << endl;
        }
    }
    else
    {
        cout << "Unable to open the file." << endl;
    }

    return 0;
}
/*
In this version, we've introduced a vector<string> named lines to store the lines read from the file.
Inside the while loop, each line is appended to the vector using the push_back function.
After reading all the lines, we close the file and proceed to display the lines stored in the vector using a range-based for loop.
*/
