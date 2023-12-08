// Binary file
# include <stdio.h>

int main(){
	double num[5],num_in[5];
	FILE *in, *out;
	
	for(int i = 1;i < 6;i++){
		num[i-1] = i * 3.275;
		printf("%lf, ",num[i-1]);
	}
	printf("\n");
	out =fopen("data3.dat","wb");
	
	for(int i = 1;i < 6;i++){
		fwrite(num,sizeof(double),5,out);
	}
	fclose(out);
	
	in = fopen("data3.dat","rb");
	for(int i = 1;i < 6;i++){
		fread(num_in,sizeof(double),5,in);
		printf("%lf \n",num_in[i-1]);
	}
	fclose(in);
	return 0;
}

/* gcc lecture10_3.c -o lecture10_3  */
