#include <iostream>
using namespace std;

class Count {
	friend void setX(Count&, int); // friend declaration
public:
	int getX() const {
		return x;
	}
private:
	int x{ 0 };
};

//function setX can modify private data of Count
// because setX is declared as a friend of Count
void setX(Count& c, int val) {
	c.x = val; // allowed because setX is a friend of Count
}

int main() {
	Count counter; // create Count object
	cout << "counter.x after instantiation: " << counter.getX() << endl;
	setX(counter, 8); // set x using a friend function
	cout << "counter.x after call to setX friend function: "
		<< counter.getX() << endl;

	return 0;
}
