#include<iostream>

using namespace std;

int main(){

	int n;
	int B = 0;
	int J = 0;
	cin >> n;
	string d[n];
	for (int i = 0; i < n; i++)
	{
		cin >> d[i];
		if(d[i] == "JUJUR"){
			B++;
		}else if(d[i] == "BOHONG"){
			J++;
		}
	}
	if(J % 2 == 1){
		cout << "BOHONG";
	}else{
		cout << "JUJUR";
	}

}
