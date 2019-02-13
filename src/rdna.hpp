#include <random>
#include <string>
#include <iostream>

using namespace std;

string randDNA(int seed,string bases,int n)
{
	int RandNumber;
	string outcome;
	int min = 0, i = 0;
	mt19937 eng1(seed);
	uniform_int_distribution<int> uniform(min, bases.size() - 1);
	while(i < n)
	{
		RandNumber = uniform(eng1);
		outcome += bases[RandNumber];
	}
	return outcome;
}
	
	
