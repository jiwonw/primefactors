#include <vector>
using namespace std;
class PrimeFactor
{
public:
	vector<int> of(int n)
	{
		vector<int> prime_factors = {};
			if (n==2||n==3)
				prime_factors.push_back(n);
		return prime_factors;
	}
private:

};