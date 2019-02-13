#include <random>
#include <string>
#include <iostream>

using namespace std;

string randDNA(int seed,string bases,int n)
{
	string outcome;
	int min = 0, i = 0;
	mt19937 eng1(seed);
	uniform_int_distribution<> uniform(min, bases.size() - 1);
	while(i < n)
	{
		random = uniform(eng1);
		outcome += bases[random];
	}
	return outcome;
}
	
	
