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
	vector<int> i, j, k;
	long long int n, q, l;
	// S able to S[0], S[1]?

	cin >> n >> q >> S;

	//int i[q], j[q];

	//bool k[q];

	i.resize(q);
	j.resize(q);
	k.resize(q);
	
	for (l = 0; l < q; l++)
	{
		scanf("%d %d %d", &i[l], &j[l], &k[l]);

		if (k[l] == 1)
		{
			sort(S.begin() + i[l] - 1, S.end() - (n - j[l]));
		}
		else
		{
			sort(S.begin() + i[l] - 1, S.end() - (n - j[l]), greater<int>());
		}
	}

	cout << S;

	return 0;
}
