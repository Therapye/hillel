#include <iostream>
#include <vector>

using namespace std;

class Instrument {
public:

	Instrument() {};

	virtual void playSound() {
		cout << "Playing sound from Instrument" << endl;
	};

};

class Piano : public Instrument {
public:

	Piano() {};

	virtual void playSound() {
		cout << "Playing sound from Piano" << endl;
	};

};

class Guitar : public Instrument {
public:
	Guitar() {};

	virtual void playSound() {
		cout << "Playing sound from Guitar" << endl;
	};

};


int main() {
	
	vector<Instrument*> orchestra;

	orchestra.push_back(new Piano());
	orchestra.push_back(new Guitar());

	orchestra[0]->playSound();
	orchestra[1]->playSound();

    return 0;
}