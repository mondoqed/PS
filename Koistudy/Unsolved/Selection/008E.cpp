#include <set>  
#include <list>  
#include <queue>  
#include <stack>  
#include <cmath>  
#include <vector>  
#include <string>  
#include <iomanip>  
#include <cassert>  
#include <sstream>  
#include <utility>  
#include <iostream>  
#include <algorithm>  

using namespace std;  

long long int bi_search(long long int key,long long int ar[],long long int n);

int main()  
{
	// binary search? like student height search
	long long int n, n_while, s;
	long long int *ar;

	cin >> n >> s;

	ar = (long long int *)malloc(n * sizeof(long long int));

	n_while = n;

	while (n_while--)
	{  
		cin >> ar[n - (n_while + 1)];
	}

	cout << bi_search(s, ar, n);

	free(ar);

	return 0;  
}

long long int bi_search(long long int key, long long int ar[], long long int n)
{
	long long int mid;
	long long int left = 0;
	long long int right = n - 1;

	while (right >= left)
	{
		mid = (right + left) / 2;

		if (key == ar[mid])
		{
			return mid + 1;
		}
		if (key < ar[mid])
		{
			right = mid - 1;
		}
		else
		{
			left = mid + 1;
		}
	}
	return -1;
}
