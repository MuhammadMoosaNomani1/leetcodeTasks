#include<stdio.h>
#include<stdlib.h>

int* shuffle(int* nums, int numsSize, int n,int* returnSize){
	int* result= (int*)malloc(numsSize*sizeof(int));
	int j=0;
	for(int i=0;i<n;i++){
		result[j++]=nums[i];  
		result[j++]=nums[i+n]; 
	}
	*returnSize=numsSize;
	return result;
}
 
int main(){
	int nums[]={2,5,1,3,4,7};
	int n=3;
	int numsSize=sizeof(nums)/sizeof(nums[0]);
	printf("Original Array: ");
	for(int i=0;i<numsSize;i++){
		printf("%d ", nums[i]);
	}
	printf("\n");
	int returnSize;
	int* result = shuffle(nums,numsSize, n, &returnSize);
	printf("Shuffled Array: ");
	for(int i=0;i<numsSize;i++){
		printf("%d ", result[i]);
	}
	printf("\n");
	free(result);
	return 0;
}
