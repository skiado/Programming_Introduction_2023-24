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
	fwrite(num,sizeof(double),5,out);
/*	for(int i = 1;i < 6;i++){
		fwrite(num,sizeof(double),5,out);
	}  */
	fclose(out);
	
	in = fopen("data3.dat","rb");
	fread(num_in,sizeof(double),5,in);
	for(int i = 1;i < 6;i++){		
		printf("%lf \n",num_in[i-1]);
	}
	fclose(in);
	return 0;
}

/* gcc lecture10_3a.c -o lecture10_3a  */
