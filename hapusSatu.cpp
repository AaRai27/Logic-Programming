#include "iostream"

using namespace std;

int main(){

	string A,B,kal3;

	cin >> A;
	cin >> B;

	int i = A.length();
	int a = 0;

	for (int j = 0; j < i; j++)
	{
		if(B[j] == A[j]){
			kal3[j] = B[j]; 
			a++;
		}else{
			kal3[j] = A[j+1];
			A[j] = A[j+1];		}
	}

	for (int b = 0; b < i; b++)
	{
		if(B[b] == kal3[b]){
			cout << "Tentu saja bisa!";
			break;
		}else{
			cout << "Wah, tidak bisa :(";
			break;
					}
	}


	return 0;
}