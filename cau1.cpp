#include<iostream>
#include<string>
using namespace std;

string Daonguoc(string s){
	int length = s.length();
	string temp;
	for (int i = length-1; i >= 0; i--) {
		temp.push_back(s[i]);
	}
	return temp;
}

int main(){
	string s;
	cin.clear();
	getline(std::cin,s);
	cout << "" << Daonguoc(s);
	return 0;
}
