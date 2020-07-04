#include<iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	int selisih[n];
	int grade[n];
	int mod[n];
	for (int i = 0; i < n; i++)
	{
		cin >> grade[i];
		mod[i] = grade[i] % 5;
		selisih[i] = 5 - mod[i];
	}
	for (int i = 0; i < n; i++)
	{
		if(selisih[i] < 3 && grade[i] >= 38){
			grade[i] += 2;
		}else{
			grade[i] = grade[i];
		}	
		cout << grade[i] <<endl;	
		
	}
	return 0;
}