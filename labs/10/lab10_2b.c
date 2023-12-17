//Άσκηση 2
#include <stdio.h>

void print_all(char fi[]) {  //FILE *f){
	char c;
	FILE *f;
	
	f = fopen(fi,"r");	
	while (feof(f) == 0){
		c = fgetc(f);
		putchar(c);
	}
	fclose(f);
	printf("\n");
}

void print_even_odd(int flag, char fi[]){
	char c;
	int line = 0;
	FILE *f;
	
	f = fopen(fi,"r");		
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
//	FILE *f;
	char file_name[20] = "lab_10_2_data.txt";
	
	print_all(file_name);
	printf("----------------------------------------\n");
	print_even_odd(1,file_name);
	printf("----------------------------------------\n");
	print_even_odd(0,file_name);
	printf("\n");

	return 0;
}

/* gcc lab10_2b.c  -o lab10_2b  */
