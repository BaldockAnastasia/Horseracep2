#include <iostream>
#include <cstdlib> 
#include <ctime>

const int track_length = 15;
const int num_horses = 5;

class Horse {
	private:
		int spot;
	public:
		Horse();
		void advance();
		int GetSpot() const;
};

class Race {
	private:
		Horse horses[num_horses];
		int length;
	public:
		Race();
		void pLane(int horseNum);
		void start();
};

Horse::Horse() {
	spot = 0;
}

void Horse::advance() {
	int odds = 1 + (rand() % 50);
        if (odds > 25){
                spot++; 
	}
}
int Horse::getSpot() const {
	return spot;
}

Race::race() {
	length = track_length;
}

void Race::pLane(int horseNum) {
	int loc = horses[horseNum].getSpot();
	for (int i = 0; i < length; i++) {
		if (i == loc) {
			std::cout << horseNum + 1;
		}
		else {
			std::cout << ".";
		}
	}
	std::cout  << std::endl;
}

void Race::start() {
	bool continue = true;

	for (int n = 0; n < num_horses; n++) {
		pLane(n);
	}
	std::cout << "\nGet ready, Get Set, GO!!" std::endl;
	std::cin.get();

	while (continue); {
		for (int number = 0; number < num_horses; number++) {
			horses[number].advance();
			pLane(number);

			if (horses[number].getSpot() >= length) {
				continue = false;
				std::cout << "\nHorse "
					  << number + 1
					  << " is the winner!\n";
			}
		}

		if (continue) {
			std::cout << "\nPress enter to take another turn...";
			std::cin.get();
		}
	}
}

int main() {
	srand(static_cast<unsigned int>(time(nullptr)));
	std::cout << "\nPress enter to begin the race\n";
	std::cin.get();

	Race race;
	race.start();

	std::cout <<"\nEnd of the race...\n" << std::endl;

	return 0;
}

