#include<iostream>

using namespace std;

int mmain(){
	int nilai;
	cin >> nilai;

	if (nilai > 70){
		cout << "A";
	}
	if ((nilai > 60)&&(nilai < 80)){
		cout << "B";
	}
	if (nilai < 50){
		cout << "C";
	}

	return 0;
}
