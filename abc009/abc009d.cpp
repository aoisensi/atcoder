#include <iostream>
#include <vector>
#include <cstdint>

using namespace std;

int main() {
	int K, M, i, j;
	uint32_t s;
	cin >> K >> M;
	vector<uint32_t> A(K);
	vector<uint32_t> C(K);
	for(i=0; i<K; i++) cin >> A[i];
	for(i=0; i<K; i++) cin >> C[i];
	for(i=K; i<M; i++) {
		s = 0;
		for(j=0; j<K; j++) s ^= (C[j] & A[i - j - 1]);
		A.push_back(s);
	}
	cout << A.back() << endl;
	return 0; //time limit
}
