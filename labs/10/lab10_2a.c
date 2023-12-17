//Άσκηση 2
#include <stdio.h>
#include <stdlib.h>

void print_all(FILE *f){
	char *c;
	size_t bufsize = 100;
	size_t line_len;

	c = (char *)malloc(bufsize * sizeof(char));
	f = fopen("lab_10_2_data.txt","r");	
	while (feof(f) == 0){
		line_len = getline(&c, &bufsize, f);
		printf("%zu -> %s",line_len,c);
	}
	fclose(f);
	printf("\n");
}

void print_even_odd(int flag, FILE *f){
	char c;
	int line = 0;
	
	f = fopen("lab_10_2_data.txt","r");		
	while (feof(f) == 0){
		c = fgetc(f);
		if ((line % 2) == flag){
			putchar(c);
		}
		if (c == '\n'){
			line++;
		}
	}
	fclose(f);
	printf("\n");
}

int main(){
	FILE *f;
	

	print_all(f);
	printf("----------------------------------------\n");
	print_even_odd(1,f);
	printf("----------------------------------------\n");
	print_even_odd(0,f);
	printf("\n");
	return 0;
}

/* gcc lab10_2a.c  -o lab10_2a  */
