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

int	roop(vector<string> map) {
	int				h = map.size();
	int				w = 0;
	if (h > 0)
		w = map[0].size();
	int				new_i = 0;
	vector<string>	new_map(0);
	set<int>		h_list;
	set<int>		w_list;

	rep (mode, 2) {
		int hw1 = (!mode ? h : w);
		int hw2 = (!mode ? w : h);
		rep (i, hw1) {
			int f = 0;
			int count = 0;
			char key = '.';
			rep (j, hw2) {
				char c = (!mode ? map[i][j] : map[j][i]);
				if (c != '.')
					count ++;
				if (key == '.' && c != '.') {
					f = 1;
					key = c;
				}
				if (c != '.' && c != key) {
					f = 0;
					break ;
				}
			}
			if (f && count > 1) {
				if (!mode)
					h_list.insert(i);
				else
					w_list.insert(i);
			}
		}
	}
	if (h_list.size() == 0 && w_list.size() == 0) {
		int	count = 0;
		rep (i, h)
			rep (j, w)
				if (map[i][j] != '.')
					count ++;
		return count;
	}
	rep (i, h) {
		if (find(h_list, i) == h_list.end()) {
			new_map.push_back("");
			rep (j, w) {
				if (find(w_list, j) == w_list.end()) {
					new_map[new_i] = new_map[new_i] + map[i][j];
				}
			}
			new_i ++;
		}
	}
	return roop(new_map);
}

int	main() {
	int	h, w;
	cin >> h >> w;
	vector<string>	map(h);
	rep (i, h)
		cin >> map[i];
	cout << roop(map) << endl;
	return 0;
}
