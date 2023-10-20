/*Πρόγραμμα δημιουργίας πίνακα τριγωνικών αριθμών
  με χρήση της εντολής for  */
  
#include <stdio.h>

int main ()
{
	int n , triangularNumber;

	triangularNumber = 0;
	
	printf ("Πίνακας Τριγωνικών Αριθμών\n\n");
	printf (" n         Άθροισμα 1 ως n\n");
	printf ("---        ---------------\n");

	for ( n = 1; n <= 10; n++)
	{
		triangularNumber = triangularNumber + n;
		printf (" %2i              %2i\n", n, triangularNumber);
	}
	
	return 0;
}

/* gcc lecture03_2a.c -o 3_2a */


