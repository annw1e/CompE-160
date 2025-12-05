#include <iostream>
#define MYREVERSE(a,l,t) \
for(int j = 0; j < l/2; j++) \
{t s = a[j]; \
a[j] = a[l-j-1];\
a[l-j-1] = s;} 
using namespace std;
int main(){
	int a[5] = {9,4,7,3,2};
	MYREVERSE(a, 5, int);
	
	for(int i = 0; i < 5; i++)
	{
		cout << a[i];
	}

}


/*DEFINE MACRO MYREVERSE(array, length, type):
    FOR j FROM 0 TO (length / 2 - 1):
        DECLARE variable temp OF type
        temp ? array[j]
        array[j] ? array[length - j - 1]
        array[length - j - 1] ? temp
    END FOR
END MACRO

DECLARE integer array u ? [9, 4, 7, 3, 2]

CALL MYREVERSE(u, 5, int)     // reverses the elements in array u

FOR i FROM 0 TO 4:
    PRINT u[i]
END FOR
END MAIN */

