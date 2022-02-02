#include<iostream>
using namespace std;

bool check_vowel(char ch){
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
		return true;
	}
	return false;
}

int main(){
	char ch;
	cout<<"Enter the character: ";
	cin>>ch;
	
	if(check_vowel(ch)){
		cout<<ch<<" is a vowel";
	}
	else{
		cout<<ch<<" is not a vowel";
	}
	
	return 0;
}
