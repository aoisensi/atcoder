#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    n = 2025 - n;
    for(int i : {1, 2, 3, 4, 5, 6, 7, 8, 9}) {
        if(!(n % i) && (n / i < 10))
            cout << i << " x " << (n / i) << endl;
    }
    return 0;
}
