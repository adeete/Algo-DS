/*

Time Complexity:-
T(n) = T(n/2) + c --> O(log n) {base 2}

Space Complexity:-
O(1)

Algorithmic Paradigm:-
Divide & Conquer

*/

#include <iostream>
#include <algorithm>

using namespace std;

bool binarySearch(int data[],int l,int r,int key){
	if(l<=r){															//Remember to check till left <= right
		int mid = l + (r-l)/2;											//For taking care of overflow situation
		
		if(key>data[mid]) return binarySearch(data,mid+1,r,key);
		else if(key<data[mid]) return binarySearch(data,l,mid-1,key);
		
		else return true;			//when it is equal,we found the element
	}
	
	return false;
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
	
	sort(data,data+inputSize);
	
	cout<<"Key to search for: ";
	int key;
	cin>>key;
	
	if(binarySearch(data,0,inputSize-1,key)) cout<<"Exists\n";
	else cout<<"Doesn't exist"<<endl;
	
	return 0;
}