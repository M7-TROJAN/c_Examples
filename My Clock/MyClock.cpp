#include <iostream>
#include <string>
#include <iomanip>
#include <windows.h>
#include <tuple>

class MyClock
{
private:
    MyClock() {} // Private constructor to prevent object creation

    enum MainMenuOptions
    {
        STOPWATCH = 1,
        COUNTDOWN = 2,
    };

    // Reads an integer value from the user between the given range and returns it
    static int _getInputInRange(const int &from, const int &to, const std::string &message = "")
    {
        int number = 0;
        do
        {
            // Read an integer value from the user
            std::cout << message;
            std::cin >> number;

            // Check if the input was invalid (i.e. not an integer)
            if (std::cin.fail())
            {
                std::cin.clear();
                std::cin.ignore(1000, '\n');
                std::cout << "Invalid input. Please enter a valid integer between " << from << " to " << to << std::endl;
                continue;
            }
            if (number < from || number > to)
            {
                std::cout << "Please enter a number between " << from << " to " << to << std::endl;
                continue;
            }
            std::cin.ignore(1000, '\n');
            break;
        } while (true);
        return number;
    }

    // Function to read the Main Menu Option from the user
    static MainMenuOptions _ReadMainMenuOption()
    {
        short Choice = _getInputInRange(1, 2);
        return (MainMenuOptions)Choice;
    }

    // Function to read the countdown time from the user
    static std::tuple<int, int, int> readCountdown()
    {
        int hours = 0;
        int minutes = 0;
        int seconds = 0;

        std::cout << "Enter the time in HH MM SS (separated by spaces):\n";
        std::cin >> hours >> minutes >> seconds;

        return std::make_tuple(hours, minutes, seconds);
    }

    // Stopwatch implementation
    static void stopwatch()
    {
        int hours = 0;
        int minutes = 0;
        int seconds = 0;
        int milliseconds = 0;

        system("cls");
        while (true)
        {
            std::cout << "\r" << std::setw(50) << std::left << ""
                    << hours << " : " << minutes << " : " << seconds << " : " << milliseconds;
            
            milliseconds++;
            Sleep(10); // Approximately 1 millisecond
            if (milliseconds == 100)
            {
                seconds++;
                milliseconds = 0;
            }
            if (seconds == 60)
            {
                minutes++;
                seconds = 0;
                milliseconds = 0;
            }
            if (minutes == 60)
            {
                hours++;
                minutes = 0;
                seconds = 0;
                milliseconds = 0;
            }
            if (hours == 24)
            {
                hours = 0;
                minutes = 0;
                seconds = 0;
                milliseconds = 0;
            }
        }
    }

    // Countdown timer implementation
    static void countdown()
    {
        std::tuple<int, int, int> countdownTime = readCountdown();
        int hours, minutes, seconds;
        std::tie(hours, minutes, seconds) = countdownTime;

        system("cls");

        while (true)
        {
            if (hours == 0 && minutes == 0 && seconds == 0)
            {
                std::cout << "\r" << std::setw(50) << std::left << "" << "Countdown complete!";
                break;
            }

            std::cout << "\r" << std::setw(50) << std::left << "" << hours << " : " << minutes << " : " << seconds;
            Sleep(1000); // Approximately 1 second

            if (seconds != 0)
            {
                seconds--;
            }
            else if (minutes != 0)
            {
                seconds = 59;
                minutes--;
            }
            else if (hours != 0)
            {
                hours--;
                minutes = 59;
                seconds = 59;
            }
        }
    }

    // Function to go back to the main menu
    static void goBackToMainMenu()
    {
        std::cout << std::setw(50) << std::left << "" << "\n\tPress any key to go back to the Main Menu...";
        system("pause > nul");
        showMainMenu();
    }

    // Function to perform the selected main menu option
    static void performMainMenuOption(MainMenuOptions option)
    {
        switch (option)
        {
        case STOPWATCH:
            system("cls");
            stopwatch();
            goBackToMainMenu();
            break;
        case COUNTDOWN:
            system("cls");
            countdown();
            goBackToMainMenu();
            break;
        }
    }

    // Function to display the main menu
    static void showMainMenu()
    {
        system("cls");
        std::cout << std::setw(37) << std::left << "" << "===========================================\n";
        std::cout << std::setw(37) << std::left << "" << "\t\t   Main Menu Screen\n";
        std::cout << std::setw(37) << std::left << "" << "===========================================\n";
        std::cout << std::setw(37) << std::left << "" << "\t[1]  STOPWATCH.\n";
        std::cout << std::setw(37) << std::left << "" << "\t[2]  COUNTDOWN.\n";
        std::cout << std::setw(37) << std::left << "" << "===========================================\n";
        std::cout << std::setw(37) << std::left << "" << "Make Your Choice: ";
        performMainMenuOption(_ReadMainMenuOption());
    }

public:
    static void start()
    {
        showMainMenu();
    }
};

int main()
{
    MyClock::start();
}