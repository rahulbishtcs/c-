#include<bits/stdc++.h>
using namespace std;
//array will be in ascending or decending order.

int binarySearch(int arr[],int n,int key){
	int start=0,end=n-1;
	int mid=(start+end)/2;
	while(start<=end){
		if(arr[mid]==key){
			return(1);
		}
		else if(key<arr[mid]){
			end = mid-1;
		}else{
			start = mid+1;
		}
		mid = (start+end)/2;
	}
	return(0);
}

int main(){
	int n,key;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"Enter key";
	cin>>key;
	int res = binarySearch(arr,n,key);
	cout<<res;
	


	return(0);
}

