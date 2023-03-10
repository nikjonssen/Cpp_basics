#include <iostream>

// macros will be initialized in preprocessor stage (text editing), before compilation

#define DEBUG 1;

#if DEBUG
#define LOG(str) std::cout << "Debug: " <<  str << "\n";
#else
#define LOG(str) std::cout << "Release: " <<  str << "\n";
#endif

#define PRESSBTN std::cin.get();

int main()
{
	LOG("Mode")
	PRESSBTN
}