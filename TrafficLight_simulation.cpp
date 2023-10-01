#include <iostream>
#include <windows.h>

enum class TrafficLightState
{
    Green,
    Yellow,
    Red
};

class TrafficLight
{
public:
    TrafficLightState state;

    void update()
    {
        switch (state)
        {
        case TrafficLightState::Green:
            setConsoleColor(2);
            std::cout << "\n\nThe traffic light is now GREEN.";
            break;
        case TrafficLightState::Yellow:
            setConsoleColor(6);
            std::cout << "\n\nThe traffic light is now YELLOW.";
            break;
        case TrafficLightState::Red:
            setConsoleColor(4);
            std::cout << "\n\nThe traffic light is now RED.";
            break;
        }
        Sleep(delayDuration);
    }

private:
    static constexpr int delayDuration = 5000; // 5 seconds

    void setConsoleColor(int colorCode)
    {
        HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(consoleHandle, colorCode);
    }
};

int main()
{
    TrafficLight trafficLight;
    trafficLight.state = TrafficLightState::Green;

    std::cout << "\nWelcome to the Traffic Light simulation. Press any key to start...";
    std::cin.get();

    while (true)
    {
        system("cls");
        trafficLight.update();

        switch (trafficLight.state)
        {
        case TrafficLightState::Green:
            trafficLight.state = TrafficLightState::Yellow;
            break;
        case TrafficLightState::Yellow:
            trafficLight.state = TrafficLightState::Red;
            break;
        case TrafficLightState::Red:
            trafficLight.state = TrafficLightState::Green;
            break;
        }
    }

    return 0;
}
