#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter the number of rows: ";
	cin>>n;
	for(int i=n;i>=1;i--){
		for(int j=n;j>=1;j--){
			if(i>=j){
				cout<<"* ";
			}
			else{
				cout<<" ";
			}
		}
		cout<<endl;
	}
	return 0;
}
