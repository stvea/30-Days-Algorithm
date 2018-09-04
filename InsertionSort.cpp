#include <iostream>
using namespace std;

void insertionSort(int* src,int n){
	for(int i=1;i<=n-1;i++){
		int target = src[i];
		int j = i - 1;//找到排好序的最后一个数字的下标 
		while(j>=0&&src[j]>target){//在序列中找到src[i]的位置 
			src[j+1] = src[j];//将大于目标的数字都往后移动 
			j--; //向前寻找 
		}
		src[j+1] = target;
	}
} 

int main(){
    int src[] = {10,9,8,7,6,5,4,3,2,1};
    insertionSort(src,10);
    for(int i=0;i<10;i++)
    	cout<<src[i]<<" ";
    return 0;
}
