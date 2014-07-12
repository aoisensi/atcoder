#include <limits>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int intmax = numeric_limits<int>::max();
    int n, m;
    cin >> n >> m;
    vector< vector<int> > time(n, vector<int>(n, 0));
    for(int i=0; i<m; i++) {
        int a, b, t;
        cin >> a >> b >> t;
        time.at(a).at(b) = t;
        time.at(b).at(a) = t;
    }

    bool fix;
    do {
        fix = false;
        for(int a=0; a<n; a++) {
            for(int b=0; b<n; b++) {
                if(a == b) continue;
                int t = intmax;
                for(int i=0; i<n; i++) {
                    int ta = time.at(a).at(i);
                    int tb = time.at(b).at(i);
                    if(ta == 0 || tb == 0) continue;
                    t = min(t, ta + tb);
                }
                if(t != intmax) {
                    int in = min(t, time.at(a).at(b));
                    time.at(a).at(b) = in;
                    time.at(b).at(a) = in;
                    fix = true;
                }
            }
        }
    } while(fix);

    int result = intmax;
    for(int i=0; i<n; i++) {
        int r = 0;
        for(int j=0; j<n; j++) {
            if(i == j) continue;
            r = max(r, time.at(i).at(j));
        }
        result = min(result, r);
    }

    cout << result << endl;
    return 0;
    //わからああああああああん
}
