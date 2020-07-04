#include<iostream>
using namespace std;
int main(){
	long long int angka;
	int n;
	cin >> n;
	long long int total = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> angka;
		total = total + angka;
	}
	cout << total;
	return 0;
}