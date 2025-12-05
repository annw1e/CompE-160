#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
	FILE *f;
	f = fopen("D:\\C++ projects\\C++ folder test\\MyBinaryTest.txt", "wb"); // b is binary, retrieved from file as is, no skipping or ignoring
	double u = 9.87654321234567;

	fwrite(&u, 8, 1, f); /* safe for binary mode, not for others fwrite(address of value writing in, number x, number y, file) x times y = number of bytes to write in
	there is a write error, u is saved in memory. &u's memory is moved into txt, so is incomprehensible. this is issue with using fwrite, use fprintf!*/

	fclose(f);
}
