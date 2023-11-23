#include <stdio.h>

int main(){
	char c;
	
	printf("Δώσε έναν χαρακτήρα:");
	scanf("%c",&c);
	printf("%c \n",c);
	return 0;
}

/* gcc test_scanf_char.c  -o test_scanf_char */
