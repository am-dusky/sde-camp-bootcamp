#include<iostream>
using namespace std;

int f(int n){
	if(n==0)
		return 1;
	return n*f(n-1);
}

int main(){
	int n;
	cout<<"enter a number to find its factorial: ";
	cin>>n;
	cout<<f(n);
	return 0;
}
