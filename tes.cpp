#include <iostream>
#include <queue>
#include <stack>

using namespace std;

int main(){

	int n;

	cin >> n;

	int ar[n];

	for (int i = 0; i < n; i++)
	{
		cin >> ar[i];
	}

	ar.pop(ar[3]);


	for (int i = 0; i < n; i++)
	{
		cout << ar[i];
	}


	return 0;
}