/*

Time Complexity:-
O(n*n)

Space Complexity:-
O(1)

Stable:-
Yes

Use bool swap in bubble sort to get optimized bubble sort.
Now, Best Case Time Complexity= O(n),when array is already sorted.

It is useful in computer graphics algorithms, when the whole array is sorted but just two elements are swapped and similar situations.

*/
#include <iostream>

using namespace std;

void bubbleSort(int data[],int size){
	for(int i=0;i<size-1;i++){
	//	bool swapped=false;
		for(int j=0;j<size-i-1;j++){ //Last i elements are already in place
			
			if(data[j]>data[j+1]){
				swap(data[j],data[j+1]);
	//			swapped=true;
			}
		}
	//	if(!swapped) break;
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
	
	bubbleSort(data,inputSize);
	
	cout<<"Sorted Array: ";
	
	for(int i=0;i<inputSize;i++){
		cout<<data[i]<<" ";
	}
	cout<<endl;
	
	return 0;
}
