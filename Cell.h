
#include <iostream>
#include<string>
#include <utility>     
#include "IllegalCharException.cpp"

using namespace std;


class Cell {

public:
	char* x;


	Cell(char* d) {
		x = d;
	}

	char& operator = (char c) {
		if (c == 'O' || c == 'X') {

			*x = c;
		}
		//else { throw IllegalCharException(c); }
		return c;
	}

	friend ostream &operator<<(ostream &output, const Cell &temp) {
		output << temp.c;
		return output;
	}
};