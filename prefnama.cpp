#include<iostream>

using namespace std;

int main(){

	string nama;
	int nnama=0;
	int n;

	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		cin >> nama[i];
	}
	

	for (int i = 0; i < n; i++)
	{
		if(nama[i] != nama[i+1]){
			nnama++;
		}
	}

	cout << nnama;

	return 0;
}