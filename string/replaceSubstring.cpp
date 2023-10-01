#include <iostream>
#include <string>

// This function replaces all occurrences of a substring with another substring in a given string
std::string replaceSubstring(const std::string& originalStr, const std::string& oldSubstr, const std::string& newSubstr)
{
    std::string modifiedStr = originalStr;

    size_t currentPosition = 0;

    // Find and replace all occurrences of the old substring with the new substring
    while ((currentPosition = modifiedStr.find(oldSubstr, currentPosition)) != std::string::npos)
    {
        modifiedStr.replace(currentPosition, oldSubstr.length(), newSubstr);
        currentPosition += newSubstr.length();
    }

    return modifiedStr;
}


// This function replaces all occurrences of a substring with another substring in a given string
std::string replaceSubstring(const std::string& originalStr, const std::string& oldSubstr, const std::string& newSubstr)
{
    std::string modifiedStr = originalStr;

    size_t currentPosition = 0;

    // Find and replace all occurrences of the old substring with the new substring
    while ((currentPosition = modifiedStr.find(oldSubstr, currentPosition)) != std::string::npos)
    {
        // Erase the old substring
        modifiedStr.erase(currentPosition, oldSubstr.length());

        // Insert the new substring at the same position
        modifiedStr.insert(currentPosition, newSubstr);

        // Update the current position to skip the newly inserted substring
        currentPosition += newSubstr.length();
    }

    return modifiedStr;
}

/*
Both replaceSubstring1 and replaceSubstring2 functions accomplish the same task of replacing all occurrences of a substring
with another substring in a given string.

However, there is a slight difference in the implementation:

replaceSubstring1:
Uses the erase and insert functions to replace the substrings.
First erases the old substring and then inserts the new substring at the same position.
Adjusts the currentPosition to skip the newly inserted substring in the next iteration.
...............................................................................................

replaceSubstring2:
Uses the replace function to replace the substrings.
Replaces the old substring directly with the new substring using the replace function.
Adjusts the currentPosition to skip the newly inserted substring in the next iteration.
................................................................................................

In terms of performance and efficiency, both functions are similar and should have comparable performance.
The choice between the two can depend on personal preference and coding style.
Some developers may find the erase and insert approach of replaceSubstring1 more intuitive,
while others may prefer the simplicity of the replace function used in replaceSubstring2.
Overall, you can choose either replaceSubstring1 or replaceSubstring2 based on your coding style and preference,
as they should provide similar results in terms of functionality and performance.

*/