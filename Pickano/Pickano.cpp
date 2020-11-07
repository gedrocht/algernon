#include "Pickano.h"

void Pickano::play(istream &in, ostream &out, int answer)
{
	int guess;

	while (true) {
		in >> guess;
		
		if (guess < answer) {
			out << "Too low" << endl;
		}
		else if (guess > answer) {
			out << "Too high" << endl;
		}
		else {
			out << "Correct!" << endl;
			break;
		}
	}
}