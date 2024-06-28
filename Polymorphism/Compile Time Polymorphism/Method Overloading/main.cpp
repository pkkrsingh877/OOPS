// Method Overloading : Compile Time Polymorphism
// Static Polymorphism
// Early Binding : Which function gets executed is decided at compile time

#include <iostream>

using namespace std;

class SuperSaiyan{  
    public:
        // Method Overloading
        void goSuperSaiyan(){
            cout << "Goku went Super Saiyan because Frieza hurt his friends." << endl;
        }
        void goSuperSaiyan(string name){
            cout << name << " went Super Saiyan because he had to defeat his enemy." << endl;
        }
        void goSuperSaiyan(string name, string reason){
            cout << name << " went Super Saiyan because " << reason << endl;
        }
};

int main(){
    SuperSaiyan *goku = new SuperSaiyan();
    SuperSaiyan *trunks = new SuperSaiyan();
    SuperSaiyan *vegeta = new SuperSaiyan();
    
    goku -> goSuperSaiyan();
    trunks -> goSuperSaiyan("Trunks");
    vegeta -> goSuperSaiyan("Vegeta", "he wanted to show everyone that he was the new Number 1 in terms of strength and not Goku.");
    
    delete goku;
    delete trunks;
    delete vegeta;

    return 0;
}