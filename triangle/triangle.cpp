#include "triangle.h"
#include <stdexcept>

namespace triangle {

	flavor kind(float x, float y, float z) {
		if (x + y + z <= 0) {
			throw std::domain_error("");
		}
		else if (x < 0 || y < 0 || z < 0) {
			throw std::domain_error("");
		}
		else{
			if (x + y < z || x + z < y || y + z < x) {
				throw std::domain_error("");
		}
			else{
		if (x == y && x == z && y == z) return flavor::equilateral;
		else if (x == y || x == z || y == z) return flavor::isosceles;
		else return flavor::scalene;
				}
			}
	}

}  // namespace triangle
