// Assignment Operator (=):
// This operator allows you to define how objects of your class are assigned.

class MyClass {
private:
    int value;

public:
    MyClass(int v) : value(v) {}

    MyClass& operator=(const MyClass& other) {
        if (this == &other) {
            return *this;
        }
        value = other.value;
        return *this;
    }
};
