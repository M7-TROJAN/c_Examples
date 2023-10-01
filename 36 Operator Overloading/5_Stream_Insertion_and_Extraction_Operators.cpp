// Stream Insertion and Extraction Operators (<<, >>):
// These operators allow you to define how objects of your class are inserted into and extracted from streams like cout and cin.

class Point {
private:
    int x;
    int y;

public:
    Point(int xCoord, int yCoord) : x(xCoord), y(yCoord) {}

    friend ostream& operator<<(ostream& os, const Point& p) {
        os << "(" << p.x << ", " << p.y << ")";
        return os;
    }

    friend istream& operator>>(istream& is, Point& p) {
        is >> p.x >> p.y;
        return is;
    }
};
