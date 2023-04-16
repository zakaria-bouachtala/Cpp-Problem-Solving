#include "grains.h"
#include <iostream>
#include <cmath>

using namespace std;

namespace grains {
	double square(unsigned int square)
	{
		return pow(2, square - 1);
	}
	double total()
	{
		int chessboard_square_length = 64;
		double sum = 0;
		for (int i = 0; i < chessboard_square_length; i++) {
			sum += pow(2, i);
		}
		
		return sum;
	}
}  // namespace grains
