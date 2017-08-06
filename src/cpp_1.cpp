//============================================================================
// Name        : cpp_1.cpp (Basic dice game)
// Author      : Spike88888888
// Version     :
// Copyright   : None
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <random>

using namespace std;

// Simple Die class
class Dice
{
public:
	// VTOR
	Dice(int size) : m_size(size) {
		setSeed();
	}
	// DTOR
	~Dice() {}
	// copy constructor
	Dice(const Dice &obj) = delete;
	// =operator
	Dice& operator=(const Dice &obj) = delete;

	// methods
	int roll() const {
		unsigned int res = rand();
		return (res % m_size + 1);
	}
private:
	int m_size;

	// methods
	void setSeed() const {
		srand(static_cast<unsigned int>(std::time(nullptr)));
	}
};


const unsigned int gDieSize = 6;
const unsigned int gNumRoll = 10;

/*
 * Main starts here
 */
int main(int argc, char *argv[]) {

	// create the die
	Dice die(gDieSize);
	int numRoll = 10;
	// roll it several time, log results
	for (int cnt=0; cnt<numRoll; ++cnt) {
		cout << "Roll die [" << cnt << "] -> " << die.roll() << endl;
	}
	return 0;
}





