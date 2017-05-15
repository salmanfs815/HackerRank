#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Person {
protected:
	string name;
	int age;
public:
	Person() { name = ""; age = 0; }
	virtual void getdata() { cin >> name >> age; }
	virtual void putdata() { cout << name << " " << age << endl; }
};

int num_prof = 0;

class Professor: public Person {
private:
	int publications;
	int cur_id; // in-class initializers + uniform initialization
public:
	Professor() :publications(0), cur_id(++num_prof) {}
	void getdata() { cin >> name >> age >> publications; }
	void putdata() { cout << name << " " << age << " " << publications << " " << cur_id << endl; }   
};

int num_stud = 0;

class Student: public Person {
private:
	int marks[6];
	int cur_id;
public:
	Student() :cur_id(++num_stud) {
		for(int i=0; i<6; ++i) marks[i] = 0;
	}
	void getdata() {
		cin >> name >> age;
		for(int i=0; i<6; ++i) cin >> marks[i];
	}
	void putdata() {
		int mark = 0;
		for(int i=0; i<6; ++i) mark += marks[i];
		cout << name << " " << age << " " << mark << " " << cur_id << endl;
	}
};

int main(){

    int n, val;
    cin>>n; //The number of objects that is going to be created.
    Person *per[n];

    for(int i = 0;i < n;i++){

        cin>>val;
        if(val == 1){
            // If val is 1 current object is of type Professor
            per[i] = new Professor;

        }
        else per[i] = new Student; // Else the current object is of type Student

        per[i]->getdata(); // Get the data from the user.

    }

    for(int i=0;i<n;i++)
        per[i]->putdata(); // Print the required output for each object.

    return 0;

}