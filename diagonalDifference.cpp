#include<iostream>
#include<cstdlib>

using namespace std;

int main(){

	int a,b,n;
	cin >> n;
	int matrix[n][n];

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> matrix[i][j];
		}
	}

	a = 0;
	b = 0;
	for (int i = 0; i < n; i++)
	{
		a += matrix[i][i];
		b += matrix[n-i-1][i];
	}
	
	cout << abs(a-b);

	return 0;
}	