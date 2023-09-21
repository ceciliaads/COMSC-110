//============================================================================
// Name        : 09-18-23-getline.cpp
// Author      : Cecilia Da Silva
// Version     :
// Copyright   : Your copyright notice
// Description : getline()
//============================================================================

#include <iostream>
using namespace std;

int main() {
//	string s;
//	cout << "Enter address" << endl;
//	getline (cin, s);
//	cout << "the line is --> " << s << " <---" << endl;
//
//	int i;
//	cout << "Enter an int" << endl;
//	i = stoi (s);
//	i++;
//	cout << "i = " << i << endl;

	cout << "Enter a name, id, tuition" << endl;
	string s;
	getline(cin, s);

	string name;
	string idNumber;
	string tuition;

	name = s.substr(0, 8);
	idNumber = s.substr(8, 5);
	tuition = s.substr(13, 7);

	cout << name << endl;
	cout << idNumber << endl;
	cout << tuition << endl;

	double t = stod(tuition);

	t = t - (t * 0.1);
	cout << "new tuition: " << t << endl;

//	int id = stoi(idNumber);
	int id = stoi(s.substr(8,5));
	id++;
	cout << id << endl;

	s = to_string(id);
	cout << s << endl;
	return 0;
}
