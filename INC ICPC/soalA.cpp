#include<iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	int scoreB[n];
	int scoreO[n];
	int pointB=0;
	for (int i = 0; i < n; i++)
	{
		cin >> scoreB[i];
	}
	for (int i = 0; i < n; i++)
	{
		cin >> scoreO[i];
	}
	for (int i = 0; i < n; i++)
	{
		if(scoreB[i] > scoreO[i]){
			pointB+=3;
		}else if(scoreO[i] == scoreB[i]){
			pointB++;
		}else{
			pointB+=0;
		}
	}
	cout << pointB;
	return 0;
}