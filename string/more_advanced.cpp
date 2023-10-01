#include <iostream>
#include <string>
using namespace std;

string capitalizeFirstLetterOfEachWord(const string& sentence)
{
    string capitalizedSentence = sentence;

    // Set the first letter of the sentence to uppercase
    if (!capitalizedSentence.empty() && std::isalpha(capitalizedSentence[0]))
    {
        capitalizedSentence[0] = std::toupper(capitalizedSentence[0]);
    }

    // Iterate over the characters of the sentence
    for (size_t i = 1; i < capitalizedSentence.length(); ++i)
    {
        // Check if the current character is a space
        if (capitalizedSentence[i - 1] == ' ')
        {
            // Set the next non-space character to uppercase
            if (std::isalpha(capitalizedSentence[i]))
            {
                capitalizedSentence[i] = std::toupper(capitalizedSentence[i]);
            }
        }
    }

    return capitalizedSentence;
}

int main()
{
    string sentence;
    cout << "Enter a sentence: ";
    getline(cin, sentence);

    string capitalizedSentence = capitalizeFirstLetterOfEachWord(sentence);
    cout << "Capitalized sentence: " << capitalizedSentence << endl;

    return 0;
}
