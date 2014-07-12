#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	string name;
	cin >> name;
	transform(name.begin(), name.end(), name.begin(), ::tolower);
	name[0] = toupper(name[0]);
	cout << name << endl;
}
