#include <vector>
#include <iostream>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;
    vector< vector<int> > arr(n);
    for(int i=0; i<n; ++i){
    	int k = 0;
    	cin >> k;
    	arr[i] = vector<int>(k);
    	for(int j=0; j<k; ++j) cin >> arr[i][j];
    }
	for(int k=0; k<q; ++k){
		int i, j;
		cin >> i >> j;
		cout << arr[i][j] << endl;
	}
    return 0;
}
