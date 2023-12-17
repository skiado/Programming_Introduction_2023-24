//Άσκηση 1 
#include <stdio.h>

int main(){
	int num[20];
	int s = 0;
	FILE *f;
	
	f = fopen("lab_10_1_data.dat","rb");
	fread(num,sizeof(num[0]),20,f);
	fclose(f);
	for(int i = 0; i < 20;i++){
		printf("%i  ",num[i]);
		s += num[i];
	}
	printf("\nΤο άθροισμα είναι : %i\n",s);
	return 0;
}

/* gcc lab10_1.c  -o lab10_1  */
