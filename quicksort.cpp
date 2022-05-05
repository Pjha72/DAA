#include<bits/stdc++.h>
using namespace std;

int Partition(int A[],int p, int r){
	int pivot = A[r];
	int i=p-1;
	for(int j=p;j<=r-1;j++){
		if(A[j]<=A[r]){
			i++;
			swap(A[i],A[j]);
		}
	}
	swap(A[i+1],A[r]);
	return i+1;
}
void quickSort(int A[], int p, int r){
	if(p<r){
		int q = Partition(A,p,r);
		quickSort(A,p,q-1);
		quickSort(A,q+1,r);
	}
}

int main(){
	int n,i,p,r;
	cout<<"Enter No of elements:>> ";
	cin>>n;

	int A[n];
	cout<<"\nEnter Value of Element:>> ";
	for(i=0;i<n;i++){
		cin>>A[i];
	}
	p=0,r=n;
	// int A[5]={2,5,4,3,1};
	quickSort(A,p,r);
	for(int i=0;i<5;i++){
		cout<<A[i]<<" ";
	}cout<<endl;

	return 0;
}