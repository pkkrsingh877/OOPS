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
