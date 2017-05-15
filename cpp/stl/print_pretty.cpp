#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
	int T; cin >> T;
	cout << setiosflags(ios::uppercase);
	cout << setw(0xf) << internal;
	while(T--) {
		double A; cin >> A;
		double B; cin >> B;
		double C; cin >> C;

		cout << setprecision(0) << noshowpos << fixed << hex << setw(0) << setfill(' ') << showbase << nouppercase << left << (long long) A << endl;

		cout << dec << setw(15) << setfill('_') << setprecision(2) << noshowbase << showpos << nouppercase << fixed << right << B << endl;

		cout << dec << setw(0) << setfill(' ') << setprecision(9) << noshowbase << noshowpos << uppercase << scientific << left << C << endl;

	}
	return 0;

}