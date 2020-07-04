#include<iostream>

using namespace std;

int main(){

	int nBar;
	cin >> nBar;


	int randNum[nBar];
	int d,m;

	for (int i = 0; i < nBar; i++)
	{
		cin >> randNum[i];
	}

	cin >> d; //sum of randNum of m bar
	cin >> m; 

	int j = 0;
	int possible = 0;
	while(j <= nBar-m){
		int total = 0;
		for (int y = j; y < j+m; y++)
		{
			total = total + randNum[y];
		}
		if(total == d){
			possible++;
		}
		j++;
	}

	cout << possible;

	return 0;
}