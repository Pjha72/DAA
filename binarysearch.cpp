#include<bits/stdc++.h>
using namespace std;

int main(){
	int i,n,key,start,end,mid;
	cout<<"Enter Number of element:>> ";
	cin>>n;

	int BS[n];
	cout<<"\nEnter Element:>> ";
	for(i=0;i<n;i++){
		cin>>BS[i];
	}
    
	cout<<"\nEnter the value of key:>> ";
	cin>>key;

	start = 0;
	end = n-1;
	mid = (start+end)/2;
	while(start<=end){
		if(key==BS[mid]){
			cout<<"\nFound the element:"<<key;
			break;
		}
		else if(BS[mid]<key){
			start = mid+1;
		}
		else{
			end = mid -1;
		}
		mid = (start+end)/2;
	}
	if(start>end){
		cout<<"\nElement not Found i.e Not persent in list :"<<key;
	}
	return 0;
}