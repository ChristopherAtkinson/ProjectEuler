#include <iostream>
#include <memory>
#include <chrono>

#include "Solution.h"

template<typename T, typename... TArgs>
inline static void Run(TArgs&&... args);

int main(int argc, char *argv[]) 
{
	Run<Solution001>(1000U); 
	Run<Solution002>(4000000U);
	Run<Solution003>();

	system("Pause");
}

template<typename T, typename... TArgs>
inline static void Run(TArgs&&... args) 
{
	auto t1 = std::chrono::high_resolution_clock::now();

	auto result = std::unique_ptr<T>(new T(std::forward<TArgs>(args)...)); 

	std::cout << "Elapsed Time : " << std::chrono::duration_cast<std::chrono::microseconds>(std::chrono::high_resolution_clock::now() - t1).count() << "ms" << std::endl;
};