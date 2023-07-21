#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i ++)
#define rrep(i, n) for (ll i = n - 1; i >= 0; i --)
#define find(list, value) find(list.begin(), list.end(), value)
#define sort(list) sort(list.begin(), sort.end())
using namespace std;

int	n;
set<int>	list; // called

void	event1() {
	static int	p_i = 1;
	list.insert(p_i);
	p_i ++;
}

void	event2() {
	int	x;
	cin >> x;
	list.erase(x);
}

void	event3() {
	cout << *list.begin() << endl;
}

int	main() {
	int	q;
	cin >> n >> q;
	while (q --) {
		int	p;
		cin >> p;
		switch (p) {
			case 1:
				event1();
				break ;
			case 2:
				event2();
				break ;
			case 3:
				event3();
				break ;
		}
	}
	return 0;
}
