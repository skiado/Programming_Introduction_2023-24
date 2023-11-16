//Άσκηση 1
# include <stdio.h>

void cube(int x){
	printf(" n = %i  n^3 = %i \n",x,x*x*x);
}

int main(){
	int n = -1;
	
	while ( (n < 0) || (n > 100)){
		printf("Δώσε έναν αριθμό από 0 έως 100 : ");
		scanf("%i",&n);
	}
	cube(n);
	return 0;
}

/* gcc lab06_1a.c -o lab06_1a  */
