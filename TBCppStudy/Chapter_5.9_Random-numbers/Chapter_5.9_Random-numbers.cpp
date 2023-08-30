#include <iostream>
#include <cstdlib> // std::rand() , std::srand
#include <ctime> // time()
#include <random>

using namespace std;

unsigned int PRNG() // Pseudo Random Number Generator
{
	static unsigned int seed = 5523; // seed number

	seed = 8254729 * seed + 2396403;

	return seed % 32768;
}

void study_01()
{

	for (int count = 1; count <= 100; ++count)
	{
		cout << PRNG() << "\t";

		if (count % 5 == 0) cout << endl;
	}
}

void study_02()
{

	srand(5323); // seed set

	for (int i = 1; i <= 100; ++i)
	{
		cout << rand() << "\t";
		if (i % 5 == 0) cout << endl;
	}
}

void study_03()
{
	srand(static_cast<unsigned int>(time(0))); // seed set

	for (int i = 1; i <= 100; ++i)
	{
		cout << rand() << "\t";

		if (i % 5 == 0) cout << endl;
	}
}

int getRandomNumber(int min, int max)
{
	static const double fraction = 1.0 / (RAND_MAX + 1.0);

	return min + static_cast<int>((max - min + 1) * (rand() * fraction));
}

void study_04()
{
	srand(5323); // seed set

	for (int i = 1; i <= 30; ++i)
	{
		cout << rand() % 4 + 5 << "\t";
		if (i % 5 == 0) cout << endl;
	}
}


int main()
{

	random_device rd;
	mt19937_64 mersenne(rd()); // 64bit 난수생성 // create a mersenne twister,
	uniform_int_distribution<> dice(1, 6); // 1~6 이하 중 하나 선택해서 나오는확률이 동일함

	for (int i = 1; i <= 20; ++i)
	{
		cout << dice(mersenne) << endl;
	}

	
	return 0;
}
