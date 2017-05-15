#include <map>
#include <string>
#include <iostream>
using namespace std;

int main() {
    int n, type, mark;
    bool exists;
    string name;
    map<string,int> marks;
    cin >> n;
    for (int i=0; i<n; ++i){
    	cin >> type >> name;
    	exists = marks.find(name) != marks.end();
    	if (type==1) {
    		cin >> mark;
    		marks[name] += mark;
    	} else if (type==2) {
    		if (exists) marks.erase(name);
    	} else cout << marks[name] << endl;
    }
    return 0;
}
