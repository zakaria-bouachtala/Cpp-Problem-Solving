#include "leap.h"

namespace leap {

	bool is_leap_year(int year)
	{
		if (!(year % 4)) {
			if (!(year % 100) && year % 400) return false;
			else return true;
		}
		else return false;
	}

}  // namespace leap
