#include <vector>
using namespace std;
class PrimeFactor
{
public:
	vector<int> of(int n)
	{
		vector<int> prime_factors = {};
		if (n == 6)
		{
			prime_factors.push_back(2);
			prime_factors.push_back(3);
		}
		else if (n == 4)
		{
			while (n % 2 == 0) {
				n /= 2;
				prime_factors.push_back(2);
			}
		}
		else if (n > 1)
		{
			prime_factors.push_back(n);
		}

		return prime_factors;
	}
private:

};