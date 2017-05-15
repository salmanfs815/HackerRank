#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    int n, y, x;
    set<int>s;
    cin >> n;
    for(int i=0; i<n; ++i) {
    	cin >> y >> x;
    	if(y==1) s.insert(x);
    	else if(y==2) s.erase(x);
    	else cout << (s.count(x)?"Yes":"No") << endl;
    }
    return 0;
}
