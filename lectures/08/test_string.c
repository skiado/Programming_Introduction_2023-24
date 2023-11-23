# include <stdio.h>
# include <string.h>
# include <ctype.h>

int main(){
	char word[25];
	int len;
	
	printf("Δώσε ένα όνομα :");
	scanf("%s",word);
	len = strlen(word);
	printf("Το %s έχει μέγεθος %i \n",word,len);
	printf("Το %s είναι λέξη %i \n",word,isalpha(word[0]));

	return 0;
}

