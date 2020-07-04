#include<iostream>
using namespace std;
int main(){
	long int n;
	cin >> n;
	long int height[n];
	if(n > 0 && n <= 100000){
		for (long int i = 0; i < n; i++)
		{
			cin >> height[i];
		}
	}
	long int max = 0;
	long int totmax = 0;
	for (long int i = 0; i < n; i++)
	{
		if(height[i] > 0 && height[i] <= 10000000){
			if(height[i] > max){
				max = height[i];
			}
		}
	}
	for (long int i = 0; i < n; i++)
	{
		if(height[i] == max){
			totmax++;
		}
	}
	cout << totmax;
	return 0;
}