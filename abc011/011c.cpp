#include <iostream>
#include <array>
#include <algorithm>

using namespace std;

array<int, 3> ng;
array<int, 3> choise = {3, 2, 1};

bool func(int c, int n) {
	if(c > 100) return false;
	if(n <= 0) return true;
	for(int g : ng) {
		if(n < g) continue;
		if(n - g > 3) {
			int cp = (n - g) / 3;
			c += cp;
			n += cp * 3;
		}
		break;
	}
	for(int l : choise)
		if(n-l!=ng[0] && n-l!=ng[1] && n-l!=ng[2])
			if(func(c+1, n-l))
				return true;
	return false;
}

int main() {
	int n;
	cin >> n >> ng[0] >> ng[1] >> ng[2];
	sort(ng.begin(), ng.end());
	reverse(ng.begin(), ng.end());
	cout << (func(0, n) ? "YES" : "NO") << endl;
}

