#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter the number of rows: ";
	cin>>n;
	int star=2*n-1;
	for(int i=1;i<=n;i++){
		for(int j=0;j<i;j++){
			cout<<" ";
		}
		for(int k=star;k>0;k--){
			cout<<"*";
		}
		star-=2;
		cout<<"\n";
	}
	return 0;
}
/*
Enter the number of rows: 5
 *********
  *******
   *****
    ***
     *
  */
