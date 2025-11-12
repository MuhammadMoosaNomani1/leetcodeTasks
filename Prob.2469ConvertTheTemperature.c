#include<stdio.h>
#include<stdlib.h>
double* convertTemperature(double celsius,int* returnSize);
int main(){
	double celsius;
	int returnSize;
	double* result;
	printf("Enter temperature in Celsius: ");
	scanf("%lf", &celsius);
	result = convertTemperature(celsius,&returnSize);
	printf("[%.5lf,%.5lf]\n",result[0], result[1]);
	free(result);
	return 0;
}

double* convertTemperature(double celsius,int* returnSize){
	double* ans = (double*)malloc(2 * sizeof(double));
	ans[0]= celsius + 273.15;
	ans[1]= celsius *1.80 + 32.00;
	*returnSize = 2; 
	return ans; 	
}
