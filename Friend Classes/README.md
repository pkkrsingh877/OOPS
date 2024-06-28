# Explaination

```cpp
#include <iostream>

using namespace std;

class Girl {
private:
    string name;
    int age;
    string job;

public:
    enum Looks { bad, average, good } looks;
    Girl(string name, int age, string job, Looks looks) : name(name), age(age), job(job), looks(looks) {}

    // Member function to print private details
    void info() const {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Job: " << job << endl;
        cout << "Looks: " << looks << endl;
    }

    // Declaring Boy as a friend class to Girl class
    friend class Boy;
};

class Boy {
public:
    void showGirlInfo(const Girl& g) const {
        g.info();  // Accessing Girl's info method
    }
};

int main() {
    Girl g1("Alice", 25, "Software Developer", Girl::good);
    Boy b1;
    b1.showGirlInfo(g1);  // Boy accessing Girl's info method to print details
    return 0;
}
```

### Summary:

1. **Class Definition**:
   - `Girl` class has private members: `name`, `age`, and `job`.
   - The class also has a public `enum Looks` with values `bad`, `average`, and `good`.

2. **Constructor**:
   - `Girl` constructor initializes the private members and the `looks` enum value.

3. **Member Function**:
   - `info()` is a member function of the `Girl` class that prints the private details of the `Girl` object.

4. **Friend Class**:
   - `Boy` class is declared as a friend class of the `Girl` class. This means `Boy` can access the private members and methods of `Girl`.
   - `Boy` has a member function `showGirlInfo(const Girl& g)` which calls the `info()` method of the `Girl` object passed to it.

5. **Main Function**:
   - A `Girl` object `g1` is created with specific values.
   - A `Boy` object `b1` calls the `showGirlInfo` method with `g1` as an argument, which prints the private details of the `Girl` object by accessing the `info` method. 

### Key Points:
- The `info` method is now a regular member function of the `Girl` class, responsible for printing the private details.
- The `Boy` class is declared as a friend class to the `Girl` class, enabling it to access the `info` method and, consequently, the private members of `Girl`.
- This demonstrates how friend classes can be used to access private members of another class, enhancing encapsulation and control over member access.