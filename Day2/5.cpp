#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter the number of rows: ";
	cin>>n;
	int n1=n/2;
	if(n1%2!=0)
		n1++;
	for(int i=0;i<n1;i++){
		for(int j=0;j<=i;j++){
			cout<<"*"<<" ";
		}
		cout<<"\n";
	}
	int n2=n-n1;
	for(int i=0;i<n2;i++){
		for(int j=n2;j>i;j--){
			cout<<"* ";
		}
		cout<<"\n";
	}
	return 0;
}
