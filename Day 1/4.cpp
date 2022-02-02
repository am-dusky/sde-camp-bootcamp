#include<iostream>
#include<math.h>
using namespace std;

int main(){
	char ch;
	int a,b;
	cout<<"Enter two numbers to perform operations: ";
	cin>>a>>b;
	cout<<"Choose + - * / ^ :";
	cin>>ch;
	int ans;
	switch(ch){
		case '+':
			ans=a+b;
			break;
		case '-':
			ans=a-b;
			break;
		case '*':
			ans=a*b;
			break;
		case '/':
			ans=a/b;
			break;
		case '^':
			ans=pow(a,b);
			break;
		default:
			cout<<"Choose correct operator:\n";
	}
	cout<<"Ans: "<<ans;
	return 0;
}
