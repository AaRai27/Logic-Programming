#include<iostream>
using namespace std;
int main(){
	long long int arr[5];
	long long int sum =0;
	long long int min = 1000000000;
	long long int max = 1;
	for (int i = 0; i < 5; i++)
	{
		cin >> arr[i];

		if(arr[i] < min){
			min = arr[i];
		}
		if(arr[i]>max){
			max = arr[i];
		}
		sum = sum+arr[i];
	}	
	long long int summin = sum- max;
	long long int summax = sum - min;
	cout << summin <<" " <<summax;
	return 0;
}