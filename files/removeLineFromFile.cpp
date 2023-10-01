/*
steps To remove a specific line from a file:
1- Open the input file for reading and a temporary output file for writing.
2- Read each line from the input file.
3- Check if the line you want to remove matches the line being read.
 -- If it matches, skip writing it to the temporary output file.
 -- If it doesn't match, write it to the temporary output file.
4- Close both the input and output files.
5- Delete the original file.
6- Rename the temporary output file to the original filename
*/

#include <iostream>
#include <fstream>
#include <string>

void removeLineFromFile(const std::string &filename, int lineToRemove)
{
    std::ifstream inputFile(filename);
    if (!inputFile)
    {
        std::cerr << "Failed to open input file: " << filename << std::endl;
        return;
    }

    std::ofstream tempFile("temp.txt");
    if (!tempFile)
    {
        std::cerr << "Failed to create temporary file." << std::endl;
        inputFile.close();
        return;
    }

    std::string line;
    int lineCount = 1;
    while (std::getline(inputFile, line))
    {
        if (lineCount != lineToRemove)
            tempFile << line << std::endl;
        lineCount++;
    }

    inputFile.close();
    tempFile.close();

    // Delete the original file
    std::remove(filename.c_str());

    // Rename the temporary file to the original filename
    std::rename("temp.txt", filename.c_str());
}

int main()
{
    std::string filename = "example.txt";
    int lineToRemove = 3;

    removeLineFromFile(filename, lineToRemove);

    std::cout << "Line removed successfully." << std::endl;

    return 0;
}