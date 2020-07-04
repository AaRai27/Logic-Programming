#include "iostream"

using namespace std;

int main(){

	int R;
	int C;

	cin >> R;
	cin >> C;

	char blok[R][C];

	for (int i = 0; i < R; i++)
	{
		for (int j = 0; j < C; j++)
		{
			cin >> blok[i][j];
		}
	}

	int baris[R];
	int kosong[R];

	for (int l = 0; l < R; l++)
	{
		int isi = 0;		
		int empty = 0;
		for (int k = 0; k < C; k++)
		{
			if(blok[l][k] == '1'){
				isi++;
				baris[l] = isi;
			}else if(blok[l][k] == '0'){
				empty++;
				kosong[l] == empty;
			}
		}
	}

	// for (int n = 0; n < R; n++)
	// {
	// 	for (int m = 0; m < C; m++)
	// 	{
	// 		if(baris[n] == C){
	// 			blok[n][m] == bl; 
	// 		}else{
	// 			blok[n][m] = blok[n][m];
	// 		}
	// 	}
	// }



	for (int n = 0; n < R; n++)
	{
		for (int m = 0; m < C; m++)
		{
			if(baris[n] == C){
				blok[R+1][m] = blok[n][m]; 
				blok[n][m] = blok[n+1][m];
			}//else{
			// 	blok[n][m] = blok[n][m];
			// }
		}
	}

cout<<endl;
	for (int a = 0; a < R; a++)
	{
		for (int i = 0; i < C; i++)
		{
			cout << blok[a][i];	
		}
		cout<<endl;
	}

	return 0;
}