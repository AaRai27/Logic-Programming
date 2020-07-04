#include<iostream>
#include <iomanip>

using namespace std;

int main(){

	int n;
	cin >> n;

	int arr[n];
	float neg = 0;
	float pos = 0;
	float zer = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		if(arr[i] > 0 && arr[i] <= 100){
			pos++;
		}else if( arr[i] < 0 && arr[i] >= -100){
			neg++;
		}else{
			zer++;
		}
	}

	float positive = pos/n;
	float negative = neg/n;
	float zero = zer/n;

	cout<<setprecision(6) << positive<<endl;
	cout<<setprecision(6) << negative<<endl;
	cout<<setprecision(6) << zero<<endl;


	return 0;
}