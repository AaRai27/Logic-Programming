#include <iostream>
using namespace std;
int main(){
	int a[3];
	int b[3];
	int na=0;
	int nb=0;
	for (int i = 0; i < 3; i++)
	{
		cin >> a[i];
	}
	for (int i = 0; i < 3; i++)
	{
		cin >> b[i];
	}
	for (int i = 0; i < 3; i++)
	{
		if(a[i] > b[i]){
			na++;
		}else if(a[i] < b[i]){
			nb++;
		}else{
			na+=0;
			nb+=0;
		}
	}
	cout << na <<" " << nb;
	return 0;
}