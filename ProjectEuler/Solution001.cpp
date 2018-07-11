#include "Solution.h"

Solution001::Solution001(const unsigned& max)
{
	auto sum = 0U; 

	for (auto index = 0U; index < max; ++index)
	{
		if (index % 3 == 0 || index % 5 == 0)
			sum += index; 
	}

	std::cout << "Sum of all the multiples of 3 or 5 below " << max << " : " << sum << std::endl; 
}

Solution001::~Solution001()
{

}