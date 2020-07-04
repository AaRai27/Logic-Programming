#include<iostream>
#include <cmath>

using namespace std;

int main(){
	int n,h;
	cin >> n >> h;
	int wallPoints[n];
	int lengths[n];
	for (int i = 0; i < n; i++)
	{
		cin >> wallPoints[i];
	}
	for (int j = 0; j < n; j++)
	{
		cin >> lengths[j];
	}
	int wallHeight[n];
	int reach[n];
	int heightTangga[n];
	int max = 0;
	for (int k = 0; k < n; k++)
	{
		wallHeight[k] = wallPoints[k]-lengths[k];	
		reach[k] = ceil(wallHeight[k] + (0.75 * lengths[k]));
		heightTangga[k] = reach[k]-h;
		if(heightTangga[k] > max){
			max = heightTangga[k];
		}
	}
	cout << max;
	return 0;
}