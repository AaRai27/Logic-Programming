#include<iostream>

using namespace std;

int main(){

	int n;
	int maks =0;
	int min = 0;
	int imaks,imin;
	cin >> n;

	int angka[n];

	for (int k = 0; k < n; k++)
	{
		cin >> angka[k]
	}

	for (int i = 0; i < n; i++)
	{
		if(angka[i] > maks){
			maks = angka[i];
			imaks = i;
		}
	}

	for (int j = imaks; j < n; j++)
	{
		if(angka[j] < maks){
			min = angka[j];
			imin = j;
		}
	}

	cout << angka[imaks] - angka[imin];

	return 0;
}
