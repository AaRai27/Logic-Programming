#include <iostream>

using namespace std;

int main(){

	// 2 <= n <= 1000000
	long n; 

	cin >> n;

	char s[n];
	// s ='U' atau 'D'

	for (int i = 0; i < n; i++)
	{
		cin >> s[i];
	}

	int U= 0;
	int D= 0;

int su[n];
int sd[n];
int j = 0;
while(j<n){
	for (int i = 0; i < n; i++)
	{
		if(s[i] == 'U' && s[i+1] == 'U'){
			U++;
		}else if (s[i] == 'D' && s[i+1] == 'D'){
			break;
		}
	}

	s[j] = U;
		for (int i = 0; i < n; i++)
	{
		if(s[i] == 'D' && s[i+1] == 'D'){
			D++;
		}else if (s[i] == 'U' && s[i+1] == 'U'){
			break;
		}
	}

	su[j] = U;
	sd[j] = D;

	j++;
}



	int tolem = 0;
	for (int i = 0; i < j; i++)
	{
		if(su[i] == sd[i]){
			tolem ++;
		}
	}

	cout << tolem;

	return 0;
}