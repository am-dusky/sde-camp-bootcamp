#include<iostream>
using namespace std;

void recur(int n){
	if(n>0){
		recur(n-1);
		cout<<n<<" ";
	}
	return;
}

int main(){
	recur(100);
	return 0;
}
