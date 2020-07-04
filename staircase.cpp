	#include<iostream>
	using namespace std;
	int main(){
		int n;
		cin >> n;
		int inv = n;
		for (int i = 0; i < n; i++)
		{
			for (int j = 1; j <= n; j++)
			{
				if(j < inv){
					cout << " ";	
				}else{
					cout << "*";
				}
			}
			inv--;
			if(i != n-1	){
					cout<<endl;
			}		
		}
		cout << endl;
		return 0;
	}