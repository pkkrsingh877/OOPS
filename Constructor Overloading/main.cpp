// Constructor Overloading

/*
-> Constructor can be overloaded meaning they can have multiple implementation
with same name.

-> Constructors can easily initialize private, protected and public data 
members of a class. 
*/

#include <iostream>

using namespace std;

class SuperSaiyan{
    private:
        string name;
        string reason;
        
    public:
        // Constructor overloading
        SuperSaiyan(){};
        SuperSaiyan(string name) : name(name) {};
        SuperSaiyan(string name, string reason) : name(name), reason(reason) {};
        
        void printDetails(){
            cout << name << " became super saiyan " << reason << endl;
        }
};

int main(){
    SuperSaiyan *goku = new SuperSaiyan("Goku", "to defeat Frieza.");
    
    goku -> printDetails();
    return 0;
}