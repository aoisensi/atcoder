#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int n;
    cin >> n;
    cout << setfill('0') << setw(2) << right
        << (n / 3600) << ':' << (n / 60 % 60) << ':' << (n % 60) << endl;
    return 0;
}
