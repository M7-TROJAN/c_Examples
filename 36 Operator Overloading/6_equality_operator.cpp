#include <iostream>
#include <iomanip>
using namespace std;

class Person {
private:
    string firstName;
    string lastName;
    string phoneNumber;

public:
    // Constructor to initialize the Person object with provided information
    Person(string fName, string lName, string phNumber)
        : firstName(move(fName)), lastName(move(lName)), phoneNumber(move(phNumber)) {}

    // Setter and Getter methods for modifying and accessing the first name
    void SetFirstName(string fName) {
        firstName = fName;
    }
    string GetFirstName() {
        return firstName;
    }

    // Setter and Getter methods for modifying and accessing the last name
    void SetLastName(string lName) {
        lastName = lName;
    }
    string GetLastName() {
        return lastName;
    }

    // Setter and Getter methods for modifying and accessing the phone number
    void SetPhoneNumber(string phNumber) {
        phoneNumber = phNumber;
    }
    string GetPhoneNumber() {
        return phoneNumber;
    }

    // Method to print the person's information
    void PrintInfo() {
        cout << "Person's Info:\n";
        cout << "First Name: " << firstName << endl;
        cout << "Last Name : " << lastName << endl;
        cout << "Phone     : " << phoneNumber << endl;
    }

    // Overloaded equality operator (==) to compare two Person objects
    bool operator==(const Person& other) {
        return firstName == other.firstName && lastName == other.lastName && phoneNumber == other.phoneNumber;
    }
};

int main() {
    // Create two Person objects
    Person person1("Mahmoud", "Mattar", "01019060452");
    Person person2("Mahmoud", "Adham", "01129816608");

    // Print information for person1 and person2
    person1.PrintInfo();
    person2.PrintInfo();

    // Check if person1 and person2 are the same using the overloaded equality operator
    if (person1 == person2) {
        cout << "Yes, they are the same!\n";
    } else {
        cout << "No, they are not the same!\n";
    }

    // Assign person1 to person2
    person2 = person1;

    // Check if person1 and person2 are the same after the assignment
    if (person1 == person2) {
        cout << "Yes, they are the same after assignment!\n";
    } else {
        cout << "No, they are not the same after assignment!\n";
    }

    // Wait for a keypress and then exit
    system("pause > nul");
    return 0;
}
