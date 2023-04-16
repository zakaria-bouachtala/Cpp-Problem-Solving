#if !defined(TRIANGLE_H)
#define TRIANGLE_H

namespace triangle {

	enum class flavor {
		equilateral,
		isosceles,
		scalene
	};

	flavor kind(float, float, float);
	
}  // namespace triangle

#endif // TRIANGLE_H