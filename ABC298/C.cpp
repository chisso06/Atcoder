#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#define ll long long
#define rep(i, s, n) for (ll i = s; i < n; i ++)
#define rrep(i, s, n) for (ll i = n - 1; i >= s; i --)
#define find(list, value) find(list.begin(), list.end(), value)
using namespace std;

void	process1(vector< vector<int> > &box, vector< vector<int> > &card) {
	int		i, j;
	int		f = 0;
	cin >> i >> j;
	i --;
	j --;
	card[i].push_back(j);
	box[j].push_back(i);
}

void	process2(vector< vector<int> > &box) {
	int	i;
	cin >> i;
	i --;
	sort(box[i].begin(), box[i].end());
	int	n = box[i].size();
	rep (j, 0, n) {
		cout << box[i][j] + 1 << (j != n - 1 ? ' ' : '\n');
	}
}

void	process3(vector< vector<int> > &card) {
	int	i;
	cin >> i;
	i --;
	sort(card[i].begin(), card[i].end());
	card[i].erase(unique(card[i].begin(), card[i].end()), card[i].end());
	int	n = card[i].size();
	rep (j, 0, n) {
		cout << card[i][j] + 1 << (j != n - 1 ? ' ' : '\n');
	}
}

int	main() {
	int	n, q;
	cin >> n >> q;
	vector< vector<int> > box(n, vector<int>());
	vector< vector<int> > card(200000, vector<int>());

	rep (i, 0, q) {
		int	query;
		cin >> query;
		if (query == 1) {
			process1(box, card);
		} else if (query == 2) {
			process2(box);
		} else if (query == 3) {
			process3(card);
		}
	}
	return 0;
}
