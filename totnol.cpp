#include "iostream"
using namespace std;
int hitungLima(int n){
	int i = 0;
	while( n % 5 == 0){
		i++;
		n = n/5;
	}
	return i;
}
int main(){
	int n;
	cin >> n;
	int hasil = 0;
	for (int i = 5; i <= n; i=i+5)
	{
		hasil = hasil + hitungLima(i);
	}
	cout << hasil;
	return 0;
}

