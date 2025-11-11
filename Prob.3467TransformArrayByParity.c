#include<stdio.h>
int* transformArray(int* nums,int numsSize, int* returnSize){
	for(int i=0;i<numsSize;i++){
		if(nums[i]%2==0) nums[i]=0; 
	 else nums[i]=1;
	 }  
	for(int i=0;i<numsSize-1;i++){ 
		for(int j=0;j<numsSize-i-1;j++){
			if(nums[j]>nums[j+1]){
				int temp = nums[j];
				nums[j]=nums[j+1];
				nums[j+1]=temp;
			}
		}
	}
	*returnSize = numsSize;
	return nums;
}
int main(){
	int nums[]={4,3,2,1};
	int size= sizeof(nums)/sizeof(nums[0]);
	int returnSize;
	printf("Original Array: \n");
	printf("[");
	for(int i=0;i<size;i++){//[1,2,3,4]
		printf("%d", nums[i]);
		if(i!=size-1) printf(",");
	}
	printf("]");
	printf("\n");
	int* result= transformArray(nums,size,&returnSize);
	printf("Transformed Array: \n");
	printf("[");
	for(int i=0;i<returnSize;i++){
		printf("%d", result[i]);
		if(i!=returnSize-1) printf(",");
	}
	printf("]");
	return 0;
}
