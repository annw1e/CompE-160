#include <stdio.h>
#include <iostream> // iostream allows printing into terminal
#include <iomanip> // adds precision libary
using namespace std;

int main()
{
	FILE *f;
	f = fopen("D:\\C++ projects\\C++ folder test\\annie.txt", "r+b"); // r+ allows for reading, writing into file is also possible, cant be used in text mode
	
	int b;
	
	b =  fgetc(f); //fgetc retrieves 1 byte from file
	
	while (b != -1)
	{
		if (b == '#')
		{
			b = '@';
			fseek(f,-1, 1); // fseek is changing position in (file, moving to (-left, +right), 0 (from previous) 1 (from current) or 2 (from next) (constants)
			fputc(b, f); 
			fseek(f, 0 , 1); //must give instructions to switch from write to read, other way around is fine though
		}
		b = fgetc(f);
	}
	fclose(f);
}

 /* read/write speaks in BINARY (COMPUTER LANGUAGE), printf/scanf translates to DECIMAL (Human language)*/
