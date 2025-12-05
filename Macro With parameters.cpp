/* Name: Anthony Aponte
Course: COMPE 160
Week: 13 Question: 1
Brief: We use  */
#include <iostream>
#define point(t) struct Point{ t x; t y; t z;};
using namespace std;
int main() {
	point(int);
	Point u;
	u.x = 4;
	cout << u.x << endl;
}

