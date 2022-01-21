//Input: nums = [-1,0,3,5,9,12], target = 9
//Output: 4
//Explanation: 9 exists in nums and its index is 4
#include<stdio.h>
int main()
{
	int nums[6] ={-1,0,3,5,9,12};
	int l=0;
	int r=5;
	int mid;
	int tar=9;
	while(l<=r){
		mid=l+r/2;
		if(nums[mid]==tar){
			printf("9 exists in nums and its index is %d",mid);
			break;
		}
		else if (nums[mid]<tar){
			l=mid+1;
		}
		else{
			r=mid-1;
		}
	}
	if(l>r)
		printf("no");
		

	return 0;
}
