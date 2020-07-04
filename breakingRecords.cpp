#include<iostream>

using namespace std;

int main(){

	int nGame;
	cin >> nGame;

	int score[nGame];

	for (int i = 0; i < nGame; i++)
	{
		cin >> score[i];
	}

	int high = score[0];
	int low = score[0];
	int nHigh = 0;
	int nLow = 0;

	for (int i = 0; i < nGame; i++)
	{
		if (score[i] > high)
		{
			high = score[i];
			nHigh++;
		}
		if (score[i] < low)
		{
			low = score[i];
			nLow++;
		}
	}

	cout << nHigh <<" " <<nLow;

	return 0;
}