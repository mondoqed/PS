#include <map>
#include <set>
#include <stack>
#include <queue>
#include <cmath>
#include <math.h>
#include <cstring>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstdio>

using namespace std;

// how to pass time limit?

// array prob? - no
// implementation sort - no
// answer is data structures

int main()
{
	string S;
	vector<long long> i, j, k;
	long long n, q, l;
	// S able to S[0], S[1]?

	cin >> n >> q >> S;

	//int i[q], j[q];

	//bool k[q];
	// int *i = new int[q];
	// int *j = new int[q];
	// int *k = new int[q];
	i.resize(q);
	j.resize(q);
	k.resize(q);
	
	for (l = 0; l < q; l++)
	{
		cin >> i[l] >> j[l] >> k[l];
		//scanf("%d %d %d", &i[l], &j[l], &k[l]);

		if (k[l] == 1)
		{
			sort(S.begin() + i[l] - 1, S.end() - (n - j[l]));
		}
		else if (k[l] == 0)
		{
			sort(S.begin() + i[l] - 1, S.end() - (n - j[l]), greater<int>());
		}
	}

	cout << S;

	/*delete i;
	delete j;
	delete k;*/

	return 0;
}