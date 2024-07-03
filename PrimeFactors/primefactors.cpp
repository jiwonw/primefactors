#include <vector>
using namespace std;
class PrimeFactor
{
public:
	vector<int> of(int n)
	{
		vector<int> prime_factors = {};
		for (int divisor = 2; divisor <= n && n > 1; divisor++)
		{
			while (n % divisor == 0)
			{
				n /= divisor;
				prime_factors.push_back(divisor);
			}
		}

		return prime_factors;
	}
private:

};