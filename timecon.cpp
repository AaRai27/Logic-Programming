#include<iostream>
#include <cctype>

using namespace std;



int main(){

	string jam;

	cin >> jam;

	if(jam[0] > '3' && jam[1] > '3'){
		cout << "BISA";
	}else{
		"tidak bisa";
	}


	// string s = "12345";
	// stringstream geek(s);
	// int x;
	// geek >> x;
	// cout <<x + 120;

	return 0;
}