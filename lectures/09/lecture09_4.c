// Πρόγραμμα για pointers σε structures
#include <stdio.h>

int main (void){
	struct date{
		int day;
		int month;
		int year;
	};
	struct date today, *datePtr;
	
	datePtr = &today;
	datePtr->day = 30;
	datePtr->month = 11;
	datePtr->year = 2023;
	printf ("Η ημερομηνία είναι : %i/%i/%.2i.\n",  datePtr->day, datePtr->month, datePtr->year %	100);
	return 0;
}

/* gcc lecture09_4.c -o lecture09_4  */
