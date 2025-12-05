#include <iostream> // first time working with hard drive, not RAM
#include <stdio.h>
using namespace std;


int main()
{
	FILE *f;
	f = fopen("C:\\Users\\owner\\Documents\\C++ folder test\\txtfile.txt", "r");// "r" means read file
	int sym;
	sym = fgetc(f);
	if (sym != -1) // EOF can also be -1, End Of File
	{
		char u;
		u = sym; // turns digit of notepad back into character
		cout << u << endl;
		cout << (char) sym << endl;
	}
	fclose(f);
}
