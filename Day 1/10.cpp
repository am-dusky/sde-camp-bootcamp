#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter an integer: ";
	cin>>n;
	int f=1;
	
	for(int i=1;i<=n;i++){
		f=f*i;
	}
	cout<<f;
	return 0;
}
