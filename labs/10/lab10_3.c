//Άσκηση 3
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void fill_rand(int l, int num[]){
	srand(time(0));
	for(int i = 0;i < l;i++){
		num[i] = random()%100;
		printf("%i, ",num[i]);
		
	}
	printf("\n");
}

int main(){
	int n[30];
	FILE *f_ev, *f_od;
	
	fill_rand(30,n);
	f_ev = fopen("data_3_ev.txt","w");
	f_od = fopen("data_3_od.txt","w");

	for (int i = 0; i < 30;i++){
		if ((n[i] % 2) == 0){
			fprintf(f_ev,"%i\n",n[i]);
		}
		else {
			fprintf(f_od,"%i\n",n[i]);
		}
	}
	fclose(f_ev);
	fclose(f_od);
	return 0;
}

/* gcc lab10_3.c  -o lab10_3  */
