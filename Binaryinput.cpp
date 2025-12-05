#include <stdio.h>
#include <iostream> // iostream allows printing into terminal
#include <iomanip> // adds precision libary
using namespace std;

int main()
{
	FILE *f;
	f = fopen("D:\\C++ projects\\C++ folder test\\MyBinaryTest.txt", "rb"); // b is binary, retrieved from file as is, no skipping or ignoring
	double z = 0;

	fread(&z, 8, 1, f); /* binary FROM the file is written INTO u.*/

	fclose(f);
	
	cout << setprecision(15) << z << endl; //trying to round number, needs precision to make 16 bytes
}
