#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() 
{
    /*
    when you open an 'std::ifstream' (input file stream),  it is opened in the 'ios::in' mode by default.
    and when you open an 'std::ofstream' (output file stream), it is opened in the 'ios::out' mode by default.
    */
    
    std::string sourceFileName = "source.txt";
    std::string destinationFileName = "destination.txt";

    // Open the source file for reading
    std::ifstream sourceFile(sourceFileName);
    if (!sourceFile.is_open()) {
        std::cerr << "Failed to open the source file." << std::endl;
        return 1;
    }

    // Open the destination file for writing
    std::ofstream destinationFile(destinationFileName);
    if (!destinationFile.is_open()) {
        std::cerr << "Failed to open the destination file." << std::endl;
        return 1;
    }

    /*
    So, in the code I provided, the 'std::ifstream sourceFile(sourceFileName);' line opens the file 'source.txt' in input mode 'ios::in',
    and the 'std::ofstream destinationFile(destinationFileName);' line opens the file 'destination.txt' in output mode 'ios::out'.
    */
}

/*
In the above program:

1-Specify the names of the source file and the destination file by assigning them to the 'sourceFileName'
and 'destinationFileName' variables, respectively.

2- The program opens the source file for reading using 'std::ifstream' and checks if the file is opened successfully.
If not, it displays an error message and exits.

3- The program opens the destination file for writing using 'std::ofstream' and checks if the file is opened successfully.
If not, it displays an error message and exits.
*/

