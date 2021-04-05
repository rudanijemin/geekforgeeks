#include<iostream>
using namespace std;
int binarysearch(int arr[],int n,int key){
	int s=0;
	int e=n;
	while(s<=n){
		int mid=(s+e)/2;
		if(arr[mid]==key){
			return mid;
		}
		else if(arr[mid]>key){   //key present in first half
			e=mid-1;  
		}
		else{
			s=mid+1;   //key present in second half
		}
	}
	return -1;
}
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int key;
	cin>>key;
	cout<<binarysearch(arr,n,key)<<endl;
}
