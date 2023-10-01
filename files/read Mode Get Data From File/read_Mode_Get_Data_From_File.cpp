/*
The read mode (ios::in) is used to open a file for reading its content.
Here's an example of how you can use the read mode to read data from a file in C++:
*/
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    fstream myFile;
    string line;

    myFile.open("myFile.txt", ios::in);

    if (myFile.is_open())
    {
        while (getline(myFile, line))
        {
            cout << line << endl;
        }
        myFile.close();
    }
    else
    {
        cout << "Unable to open the file." << endl;
    }
    return 0;
}

/*
In the above example:

1- We declare an fstream object named myFile for reading from the file.
2- We declare a string variable named line to store each line of the file.
3- We open the file "myFile.txt" in read mode (ios::in).
4- Inside the if statement, we check if the file was successfully opened.
5- We use a while loop to read each line of the file using getline until the end of the file is reached.
6- Inside the loop, we output each line to the console using cout.
7- After reading all the lines, we close the file using the close function.
8- If the file cannot be opened, an appropriate error message is displayed.

When you run this code, it will read and display the contents of the "myFile.txt" file line by line.
*/
