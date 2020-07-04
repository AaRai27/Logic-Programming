#include<iostream>

using namespace std;

int main(){

	int n;
	cin >> n;
	int inv =n;
	cout<<"tek kotek kotek kotek, anak ayam turun berkotek"<<endl;
	for (int i = 0; i < n; i++)
	{
		if (i != n-1){
		cout << "anak ayam turunlah "<<inv<<", mati satu tinggallah "<< inv-1<<endl;
		}else{
			cout << "anak ayam turunlah "<<inv<<", mati satu tinggallah induknya"<<endl;
		}
		inv--;
	}

	return 0;
}