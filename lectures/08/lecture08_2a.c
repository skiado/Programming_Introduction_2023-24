// Συνάρτηση υπολογισμού του αριθμού των χαρακτήρων ενός string
#include <stdio.h>
int stringLength (const char string[]){
	int count = 0;
	
	while ( string[count] != '\0' ){
		count++;
	}
	return count;
}
int main (void) {
	const char word1[] = { 'a', 's', 't', 'e', 'r', '\0' };
	const char word2[] = { 'a', 't', '\0' };
	const char word3[] = { 'a', 'w', 'e', '\0' };
	const char greek[] = {"Ιόνιο Πέλαγος"};
	
	printf ("%i %i %i %i\n", stringLength (word1),stringLength (word2), stringLength (word3),stringLength(greek));
	return 0;
}

/* gcc lecture08_2a.c  -o lecture08_2a */
