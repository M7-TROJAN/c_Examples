
/*
If you want to append data to an existing file instead of overwriting its contents, you can open the file in append mode (ios::app)
instead of output mode (ios::out)
*/

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

struct persons
{
    string name;
    int age;
};

int main()
{
    fstream myFile;
    persons person;
    person.age = 25;
    person.name = "mahmoud";
    
    myFile.open("myFile.txt", ios::app);

    if (myFile.is_open())
    {
        myFile << person.name << endl;
        myFile << person.age << endl;
        
        myFile.close();
        cout << "Data appended to the file successfully." << endl;
    }
    else
    {
        cout << "Unable to open the file." << endl;
    }

    return 0;
}

/*
By using 'ios::app' as the second argument of the open function, the file is opened in append mode.
This means that when you write to the file using the << operator, the data will be appended to the end of the file,
preserving its existing content.
Now, each time you run the program, the data in the struct object s will be appended to the file "myFile.txt"
without removing any previous data that was written to the file.
*/