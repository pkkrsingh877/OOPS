// Program to show abstraction, pure virtual function
#include <iostream>

using namespace std;

class Animal{
    public:
        virtual void speaks() = 0;
};

class Dog : public Animal{
    public:
        void speaks() override {
            cout << "Woof Woof!" << endl;
        }
}; 

class Cat : public Animal{
    public:
        void speaks() override {
            cout << "Meow Meow!" << endl;
        }
}; 

class Horse : public Animal{
    public:
        void speaks() override {
            cout << "Neigh Neigh!" << endl;
        }
}; 

int main(){
    Animal *dog = new Dog();
    Animal *cat = new Cat();
    Animal *horse = new Horse();
    
    dog -> speaks(); 

    cat -> speaks();
    
    horse -> speaks();
    
    delete dog;
    delete cat;
    delete horse;
    
    return 0;
}