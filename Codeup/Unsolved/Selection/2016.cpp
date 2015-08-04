#include <map>
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

int main()
{
	queue<char> q;
	stack<char> s;

	int n, cnt = 0;
	char t;

	cin >> n;
// use stack and queue?
	for (int i = 0; i < n; i++) {
		if (i % 3 == 0 && i != 0) {
			s.push(',');
			cnt++;
		}
		cin >> t;
		q.push(t);
	}

	for (int i = 0; i < n + cnt; i++) {
		if (i % 3 == 0 && i != 0) {
			cout << s.top();
			s.pop();
		}
		else {
			cout << q.front();
			q.pop();
		}
	}
	return 0;
}
