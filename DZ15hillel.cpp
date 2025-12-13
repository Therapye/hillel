#include <iostream>
#include <string>
#include <vector>

using namespace std;


class Transport {
private:
    unsigned int speed; 

public:

    Transport(unsigned int s) : speed(s) {}

    virtual void ShowInfo() const {
        cout << "Speed: " << speed << " km/h";
    }
};


class Car : public Transport {
private:
    unsigned int fuel;

public:
    Car(unsigned int s, unsigned int f) : Transport(s), fuel(f) {}

    void ShowInfo() const override {
        Transport::ShowInfo();
        cout << ", Fuel: " << fuel << " liters" << endl;
    }
};


class Bicycle : public Transport {
private:
    string type; 

public:
    Bicycle(unsigned int s, string t) : Transport(s), type(t) {}

    void ShowInfo() const override {
        Transport::ShowInfo();
        cout << ", Type: " << type << endl;
    }
};

int main() {

    Transport* car = new Car(120, 45);
    Transport* bike = new Bicycle(25, "Mountain");


    vector<Transport*> vehicles;
    vehicles.push_back(car);
    vehicles.push_back(bike);

    for (int i = 0; i < vehicles.size(); i++) {
        vehicles[i]->ShowInfo();
    }


    return 0;
}