#include<bits/stdc++.h>
using namespace std;

void revArr(int arr[],int size){
	int s=0,e=size-1,i=0,j=1;
	while(s<=e){
		int t = arr[i];
		arr[i] = arr[size-j];
		arr[size-j] = t;
		s++;
		e--;
		j++;
		i++;
	
	}
	for(int i=0;i<size;i++){
		cout<<arr[i]<<endl;
	}
	
}

int main(){
	int size;
	cin>>size;
	int arr[size];
	for(int i=0;i<size;i++){
		cin>>arr[i];
	}
	revArr(arr,size);

	return(0);
}
