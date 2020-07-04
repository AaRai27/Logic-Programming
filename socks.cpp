#include <iostream>

using namespace std;

int main(){

	int n;
	
	int pairs = 0;

	cin >> n;
	int ar[n];
	for (int i = 0; i < n; i++)
	{
		cin >> ar[i];
	}

	for (int j = 0; j < n; j++)
	{
		for (int k = 0; k < n; k++)
		{
			if(ar[j] > 0 && ar[k] > 0){
				if(ar[j] == ar[k] && j != k){
				pairs++;
				ar[j] = 0;
				ar[k] = 0;
				break;
				}
			}
		}
	}

	cout << pairs;

	return 0;
}