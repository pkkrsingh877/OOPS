#include <iostream>

using namespace std;

// Create an Abstract Class

/*
-> Abstract Class is a class which 

a. Can not be created an object of using Base Class.
b. Must have atleast 1 pure virtual function
c. Pure Virtual function must be overriden in the derived class


Here, takeASelfie() and makeACall() pure virtual functions are being
overridden in the IPhone and Android derived Classes which is what
method overriding or Runtime Polymorphism is.

*/
class Smartphone{
    public:
        virtual void takeASelfie() = 0;
        virtual void makeACall() = 0;
};

class Android : public Smartphone{
    void takeASelfie() override {
        cout << "Taking a Selfie from an Android Phone" << endl;
    }
    void makeACall() override {
        cout << "Making a call from an Android Phone" << endl;
    }
};

class IPhone : public Smartphone{
    void takeASelfie() override {
        cout << "Taking a Selfie from an IPhone" << endl;
    }
    void makeACall() override {
        cout << "Making a call from an IPhone" << endl;
    }
};

int main(){
    Smartphone *M33 = new Android();
    M33 -> makeACall();
    M33 -> takeASelfie();
    
    Smartphone *V15ProMax = new IPhone();
    V15ProMax -> makeACall();
    V15ProMax -> takeASelfie();
    return 0;
}