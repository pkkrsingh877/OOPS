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
