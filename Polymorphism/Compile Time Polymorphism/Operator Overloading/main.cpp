#include <iostream>

using namespace std;

class Point{
    private:
        int x;
        int y;
    public:
        Point() : x(0), y(0) {};
        Point(int x, int y) : x(x), y(y) {};

        Point operator - (const Point &p) const{
            Point result;
            result.x = x - p.x;
            result.y = y - p.y;
            return result;
        }

        void display(){
            cout << "x: " << x << " y: " << y << endl;
        }
};

int main(){
    Point p1(5, 6);
    Point p2();
    Point p3(11, -5);
    Point p4 = p3 - p1;
    p4.display();
    p1.display();

    return 0;
}