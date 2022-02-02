#include<iostream>
#include<math.h>
using namespace std;

int main(){
	int a,b,c;
	cout<<"Enter three numbers: ";
	cin>>a>>b>>c;
	if(a>b && b>c){
		cout<<a<<" is greatest";
	}
	else if(b>a && a>c){
		cout<<b<<" is greatest";
	}
	else{
		cout<<c<<" is greatest";
	}
	return 0;
}
