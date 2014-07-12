#include <iostream>

using namespace std;

int main() {
	int N, i, t, m, n;
	cin >> N;
	m = 0; n = 0;
	for(i=0; i<N; i++) {
		cin >> t;
		if(m < t) {
			n = m;
			m = t;
		} else if((m > t) && (n < t)) n = t;
	}
	cout << n << endl;
	return 0;
}
