#include<iostream>

using namespace std;

int main(){

	string jam;

	cin >> jam;

	cout << jam[1]<<endl;
	cout << jam[0] << endl;

	int b = int(jam[1]);
	int a = int(jam[0]);

	cout << a<<endl;
	cout << b;

	return 0;
}