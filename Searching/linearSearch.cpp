#include<bits/stdc++.h>
using namespace std;

bool linearSearch(int arr[],int size,int key){
	
	for(int i=0;i<size;i++){
		if(arr[i]==key){
			return(1);
		}
	}
	return(0);
}

int main(){
	int size,key;
	cin>>size;
	int arr[size];
	for(int i=0;i<size;i++){
		cin>>arr[i];
	}
	cout<<"Key: ";
	cin>>key;
	cout<<linearSearch(arr,size,key);
	return(0);
}
