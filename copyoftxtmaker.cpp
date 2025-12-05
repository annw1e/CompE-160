#include <iostream> // first time working with hard drive, not RAM
#include <stdio.h>
using namespace std;


int main()
{
	FILE *fin;
	FILE *fout;
	fin = fopen("C:\\Users\\owner\\Documents\\C++ folder test\\txtfile.txt", "r");// "r" means read file
	fout = fopen("C:\\Users\\owner\\Documents\\C++ folder test\\OtherFile.txt", "w"); // w means write in a file, OtherFile
	int sym;
	sym = fgetc(fin);
	while (sym != -1) // EOF can also be -1, End Of File
	{
		/*if you dont want linebreaks,
		if(sym == '\n')
			sym = ' ';
		*/
		fputc(sym, fout); //write 1 byte into destination
		sym = fgetc(fin); // get next byte from source file
	
	}
	fclose(fin);
	fclose(fout);
}
