#include<iostream>
using namespace std;

int main(){
	int n,col;
	cout<<"Enter the number of rows: ";
	cin>>n;
	cout<<"Enter the number of column: ";
	cin>>col;
	for(int i=0;i<n;i++){
		for(int j=0;j<col;j++){
			if((i==0)||(j==0)||(i==n-1)||(j==col-1))
				cout<<"*";
			else
				cout<<" ";
		}
		cout<<"\n";
	}
	return 0;
}
/*
Enter the number of rows: 5
Enter the number of column: 4
****
*  *
*  *
*  *
****
*/
