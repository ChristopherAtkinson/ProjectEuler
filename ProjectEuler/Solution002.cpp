#include "Solution.h"

Solution002::Solution002(const unsigned& max)
{
	auto previous = 1U, sum = 0U; 

	for (auto index = 1U; index < max; index += previous)
	{
		if (index % 2 == 0)
			sum += index; 

		previous = index - previous; 
	}

	std::cout << "Sum of all even fibonacci numbers below " << max << " : " << sum << std::endl;
}

Solution002::~Solution002()
{

}