// Comparison Operators (==, !=, <, >, <=, >=):
// These operators allow you to compare objects of your class.

class Date {
private:
    int day;
    int month;
    int year;

public:
    Date(int d, int m, int y) : day(d), month(m), year(y) {}

    bool operator==(const Date& other) {
        return (day == other.day && month == other.month && year == other.year);
    }

    bool operator!=(const Date& other) {
        return !(*this == other);
    }

    // Other comparison operators can be similarly overloaded.
};
