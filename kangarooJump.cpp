#include<iostream>
using namespace std;
int main(){
	int x1,x2,v1,v2;
	int for1, for2;
	cin >> x1 >> v1 >> x2 >> v2;
	if(x2 > x1 && x2 >= 0 && x2 <= 10000){
		while(x1 < 10000 && x2 < 10000 && x1 != x2){
			x1+=v1;
			x2+=v2;
		}
		if(x1 == x2){
			cout << "YES";
		}else{
			cout << "NO";
		}
	}else{
		cout << "X1 LEBIH BESAR DARI X2";
	}
	return 0;
}