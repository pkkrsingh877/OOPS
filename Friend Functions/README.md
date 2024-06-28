# Explaination

Here's the cleaned-up code along with a summary:

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

    // Declaring info as a friend function to the Girl class
    friend void info(Girl g1);
};

// Friend function 'info' is able to take a Girl object as an argument and print her private details
void info(Girl g1) {
    cout << "Name: " << g1.name << endl;
    cout << "Age: " << g1.age << endl;
    cout << "Job: " << g1.job << endl;
    cout << "Looks: " << g1.looks << endl;
}

int main() {
    Girl g1("Alice", 25, "Software Developer", Girl::good);
    info(g1);
    return 0;
}
```

### Summary:

1. **Class Definition**:
   - `Girl` class has private members: `name`, `age`, and `job`.
   - The class also has a public `enum Looks` with values `bad`, `average`, and `good`.

2. **Constructor**:
   - `Girl` constructor initializes the private members and the `looks` enum value.

3. **Friend Function**:
   - `info(Girl g1)` is declared as a friend function of the `Girl` class.
   - Being a friend function, `info` can access the private members of the `Girl` class.

4. **Main Function**:
   - A `Girl` object `g1` is created with specific values.
   - The `info` function is called with `g1` as an argument, which prints the private details of the `Girl` object.

### Key Points:
- Friend functions can access the private and protected members of a class.
- In this example, `info` is a friend function of the `Girl` class, allowing it to print the private data members of `Girl` objects.