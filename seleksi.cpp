#include<iostream>

/*T = banyak seleksi
  N = banyak yang mendaftar
  M = banyak yang diterima
  id*/
using namespace std;

const int n = 80;

int main(){

	int T;
	int N;
	int M;
	string id_cari,id[n];
	int nilai1[500],nilai2[1000],nilai3[500];

	cin >> T;
	cin >> N;
	cin >> M;
	cin >> id_cari;

	for (int i=0;i<N;i++){
		cin >> id[i];
		cin >> nilai1[i];
		cin >> nilai2[i];
		cin >> nilai3[i];
	}


	return 0;
}