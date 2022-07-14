#include <iostream>
using namespace std;

enum vehicletype {
	twoWheeler, threewheeler, fourwheeler
};

class vehicle {
public:
	virtual void printvehicle() = 0;
	static vehicle* create(vehicletype type);
	virtual ~vehicle(){}
};
class Twowheeler : public vehicle {
public:
	void printvehicle() {
		cout << "I am two wheeler" << endl;
	}
};
class Threewheeler : public vehicle {
public:
	void printvehicle() {
		cout << "I am three wheeler" << endl;
	}
};
class Fourwheeler : public vehicle {
	public:
	void printvehicle() {
		cout << "I am four wheeler" << endl;
	}
};

// Factory method to create objects of different types.
// Change is required only in this function to create a new object type
vehicle* vehicle::create(vehicletype type) {
	if (type == twoWheeler)
		return new Twowheeler();
	else if (type == threewheeler)
		return new Threewheeler();
	else if (type == fourwheeler)
		return new Fourwheeler();
	else return NULL;
}

// Client class
class client {
public:

	// Client doesn't explicitly create objects
	// but passes type to factory method "create()"
	client()
	{
		vehicletype type = threewheeler;
		pvehicle = vehicle::create(type);
	}
	~client() {
		if (pvehicle) {
			delete pvehicle;
			pvehicle = NULL;
		}
	}
	vehicle* getvehicle() {
		return pvehicle;
	}

private:
	vehicle *pvehicle;
};


int main() {
	client *pclient = new client();
	vehicle * pvehicle = pclient->getvehicle();
	pvehicle->printvehicle();
	delete pclient;
	return 0;
}
