#include <iostream>
#include <memory>
#include <chrono>

#include "Solution.h"

template<typename T, typename... TArgs>
inline static void Run(TArgs&&... args);

int main(int argc, char *argv[]) 
{
	Run<Solution001>(1000); 
	Run<Solution002>(4000000);

	system("Pause");
}

template<typename T, typename... TArgs>
inline static void Run(TArgs&&... args) 
{
	auto result = std::unique_ptr<T>(new T(std::forward<TArgs>(args)...)); 
};