#include <iostream>
using namespace std;
int main(){
	int a,b;
	cin>>a>>b;
	int nilai[a];
	int sum = 0;
	for (int i = 0; i < a; i++)
	{
		cin >> nilai[i];
	}
	for (int i = 1; i < a; i++)
	{
		sum+=nilai[i];
	}
	int hasil; 
	if(sum > nilai[0]){
		hasil = sum - nilai[0];
	}else{
		hasil = nilai[0] - sum;
	}
	
	if (hasil % 2 == 0){
		cout<<"Preston"<<endl;
	}else{
		cout<<"John"<<endl;
	}
	return 0;
}