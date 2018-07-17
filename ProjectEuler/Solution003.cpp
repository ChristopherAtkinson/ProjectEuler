#include "Solution.h"

Solution003::Solution003(unsigned long long number)
{
	auto copy = number; 
	auto factor = 1ULL; 

	while (factor != number)
	{
		for (auto index = 2ULL; index <= number; ++index)
		{
			if (index == number)
			{
				factor = number;
				break;
			}

			if (number % index == 0)
			{
				number /= index;
			}
		}
	}

	std::cout << "The greatest prime factor of " << copy << " : " << factor << std::endl;
}

Solution003::~Solution003()
{

}