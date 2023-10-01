// Increment and Decrement Operators (++, --):
// These operators allow you to define the behavior of pre-increment, post-increment, pre-decrement, and post-decrement operations.

class Counter {
private:
    int count;

public:
    Counter(int c) : count(c) {}

    // Pre-increment operator
    Counter& operator++() {
        ++count;
        return *this;
    }

    // Post-increment operator
    Counter operator++(int) {
        Counter temp = *this;
        ++(*this);
        return temp;
    }

    // Other increment and decrement operators can be similarly overloaded.
};
