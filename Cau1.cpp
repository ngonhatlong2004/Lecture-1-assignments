#include<iostream>
#include<string>
#include<algorithm>
#include<cstring>
using namespace std;
int main(){
	string s;
	string s_ ="";
	getline(cin,s);

	for(int i=s.length()-1;i>=0;i--){
		s_+=s[i];
		
	} 
	cout<<s_;
	
	return 0;
}
