/*

Time Complexity:-
O(n*n)

Space Complexity:-
O(1)

Special note:- Good thing about selection sort is that it never makes more than O(n) swaps and can be useful where memory write is costly.

*/

#include <iostream>

using namespace std;

void selectionSort(int data[],int size){
	for(int i=0;i<size-1;i++){
		int min_index=i;
		for(int j=i+1;j<size;j++){
			if(data[j]<data[min_index]){ 
				min_index=j;
			}
		}
		swap(data[i],data[min_index]);	
	}
}

int main(){
	int inputSize;
	cout<<"Input Size: ";
	cin>>inputSize;
	
	int data[inputSize];
	
	cout<<"Input data: \n";
	
	for(int i=0;i<inputSize;i++){
		cin>>data[i];
	}
	
	selectionSort(data,inputSize);
	
	cout<<"Sorted Array: ";
	
	for(int i=0;i<inputSize;i++){
		cout<<data[i]<<" ";
	}
	cout<<endl;
	
	return 0;
}