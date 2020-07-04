#include<iostream>

using namespace std;

int main(){

	int n;
	cin >> n;

	long int angka[n];
	int banyak=0;
	int ganjill = 0;
	int pembagi;
	int ganjil[n];
	int hasil[n];
	int genap[n];

	for (int i = 0; i < n; i++)
	{
		cin >> angka[i];

		if(angka[i] % 2 == 0){
			genap[i] = angka[i];
		}else{
			ganjil[i] = angka[i];
		}

	}

	for (int i = 0; i < n; i++)
	{
		if(genap[i] > ganjil[i]){
			hasil[i] = genap[i] % ganjil[i];
		}else{
			hasil[i] = ganjil[i] % genap[i];
		}

		if(hasil[i] % 2 == 1){
			ganjill++;
		}else{
			ganjill = ganjill + 0;
		}
	}


	cout << ganjill;
	return 0;
}