#include <iostream>
using namespace std;

void insertionSort(int* src,int n){
	for(int i=1;i<=n-1;i++){
		int target = src[i];
		int j = i - 1;//�ҵ��ź�������һ�����ֵ��±� 
		while(j>=0&&src[j]>target){//���������ҵ�src[i]��λ�� 
			src[j+1] = src[j];//������Ŀ������ֶ������ƶ� 
			j--; //��ǰѰ�� 
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
