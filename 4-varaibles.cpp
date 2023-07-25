#include <stdio.h>

int main() {
	// We learned data types at before lecture
	// int, float, char, str
	// On this lecture we learn how to create a varaible

	// Data type Varaible name = Value;
	// Example for all data types

	int a = 5;
	float b = 8.3;
	char c = 'B';
	char d[10] = "Bahri";

	// Varaible Name Rules
	// Names can contain letters, digits and underscores.
	// Names must begin with a letter or an underscore(_)
	// Names are case sensitive(myVar and myvar are different variables)
	// Names cannot contain whitespaces or special characters like !, #, %, etc.

	int x1;		// True
	int 1x;		// False
	int rolno;  // True
	int rol no; // False
	int rol_no; // True
	int rolNo;  // True
	int RolNo;	// True

	return 0;
}