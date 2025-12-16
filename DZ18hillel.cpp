#include <iostream>
#include <vector>

using namespace std;

class Device {
public:

	virtual void Start() = 0;
	virtual void Stop() = 0;
	virtual ~Device() = default;
};


class Printer : public Device {
public:
	void Start() override {
		cout << "Printer started\n";
	}

	void Stop() override {
		cout << "Printer stopped\n";
	}
};

class Scanner : public Device {
public:
	void Start() override {
		cout << "Scanner started\n";
	}

	void Stop() override {
		cout << "Scanner stopped\n";
	}
};


void ManageDevice(Device* device) {
	device->Start();
	device->Stop();
}


int main() {
	Printer printer;
	Scanner scanner;

	ManageDevice(&printer);
	ManageDevice(&scanner);

	return 0;
}
