# Operator Overloading

**Operator Overloading** in C++ allows you to define new behaviors for existing operators when applied to user-defined types (classes or structs). This means you can redefine how operators like `+`, `-`, `*`, `/`, `==`, `!=`, `<<`, `>>`, etc., work with objects of your own classes. This feature enables a more natural and intuitive syntax for operations involving your custom types, similar to built-in types.

### When to Use Operator Overloading:

1. **Enhanced Readability**: Operator overloading can make your code more readable by allowing you to use familiar operators with your custom types. For example, `point1 + point2` intuitively suggests addition of two points.

2. **Simplifying Operations**: It can simplify complex operations on objects by providing a concise syntax. This is particularly useful for mathematical or vector operations where operators have well-defined meanings.

3. **Maintaining Object-Oriented Design**: Operator overloading encourages object-oriented design principles by encapsulating behavior related to your class within the class itself.

4. **Consistency**: It helps maintain consistency in your codebase, as operations on objects of the same type can be expressed uniformly using operators.

### Summarizing the Provided Code:

The provided C++ code demonstrates the use of operator overloading in a `Point` class to perform subtraction of coordinates and display results. Here's a summary of the code:

```cpp
#include <iostream>
using namespace std;

class Point {
private:
    int x;
    int y;

public:
    // Constructors
    Point() : x(0), y(0) {}
    Point(int x, int y) : x(x), y(y) {}

    // Overloaded subtraction operator to calculate distance traveled
    Point operator-(const Point& p) const {
        Point result;
        result.x = x - p.x;
        result.y = y - p.y;
        return result;
    }

    // Display method to print coordinates
    void display() const {
        cout << "x: " << x << " y: " << y << endl;
    }
};

int main() {
    // Creating Point objects
    Point p1(5, 6);   // Creates point at (5, 6)
    Point p3(11, -5); // Creates point at (11, -5)

    // Calculating distance traveled from p3 to p1 using operator overloading
    Point p4 = p3 - p1;

    // Displaying results
    cout << "Result of p3 - p1:" << endl;
    p4.display();

    cout << "\nCoordinates of p1:" << endl;
    p1.display();

    return 0;
}
```

### Summary of the Code:

- **Point Class**: Defines a `Point` class with private data members `x` and `y`.

- **Constructors**: Provides both default and parameterized constructors to initialize `Point` objects with specified coordinates.

- **Operator Overloading**: Overloads the `-` (subtraction) operator to perform coordinate-wise subtraction of two `Point` objects (`p3 - p1`). It returns a new `Point` object with the resulting coordinates.

- **Main Function**: Demonstrates the usage of operator overloading to calculate and display the distance traveled between two points (`p3` and `p1`) and to display the coordinates of `p1`.

This code showcases how operator overloading can be used to define custom behaviors for operators within a class, providing clarity and conciseness in expressing operations involving custom types like `Point`.