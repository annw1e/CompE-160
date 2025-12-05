#include <iostream> // first time working with hard drive, not RAM
#include <stdio.h>
using namespace std;


int main()
{
	FILE *f;
	f = fopen("C:\\Users\\owner\\Documents\\C++ folder test\\txtfile.txt", "r");// "r" means read file
	int sym;
	sym = fgetc(f);
	while (sym != -1) // EOF can also be -1, End Of File
	{
		char u;
		u = sym; // turns digit of notepad back into character
		cout << u; // putting endl will cause the newline to print twice. cout << (char) sym; can also be like this 
		sym = fgetc(f);
	}
	fclose(f);
}
