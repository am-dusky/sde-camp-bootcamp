#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter the number of rows: ";
	cin>>n;
	int star=1;
	for(int i=1;i<=n;i++){
		for(int j=n-1;j>=i;j--){
			cout<<" ";
		}
		for(int k=0;k<star;k++){
			cout<<"*";
		}
		star+=2;
		cout<<"\n";
	}
	return 0;
}

/*
Enter the number of rows: 5
    *
   ***
  *****
 *******
*********
*/
