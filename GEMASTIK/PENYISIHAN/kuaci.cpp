#include<iostream>

using namespace std;

int percobaan(int kuaciMaxGe, int kuaciMinGe, int kuaciMaxAs, int kuaciMinAs){
	return (kuaciMaxGe-kuaciMinGe+1)*(kuaciMaxAs-kuaciMinAs+1);
}

int penambahan(int kuaci, int uang){
	return kuaci+uang;
}

int pengurangan(int kuaciLawan, int kuaciSendiri){
	return kuaciLawan - kuaciSendiri;
}

int main(){

	int uangGe,uangAs;
	int kuaciGeBefore,kuaciAsBefore;
	int kuaciGe, kuaciAs;
	int kuaciMaxGe,kuaciMinGe;
	int kuaciMaxAs,kuaciMinAs;
	int kuaciGeNow,kuaciAsNow;
	int pointGe = 0;
	int pointAs = 0;

	cin >> uangGe >> uangAs >> kuaciMinGe >> kuaciMaxGe >> kuaciMinAs >> kuaciMaxAs;

	// percobaan(kuaciMaxGe,kuaciMinGe,kuaciMaxAs,kuaciMinAs);
	int banyak = percobaan(kuaciMaxGe,kuaciMinGe,kuaciMaxAs,kuaciMinAs);
	// kuaciGe = kuaciMinGe;
	// kuaciAs = kuaciMinAs;

	for (int i = 0; i < banyak; i++)
	{
		for (int j = kuaciMinGe; j <= kuaciMaxGe; j++)
		{
			kuaciGeBefore = 0;
			kuaciAsBefore = 0;
			for (int k = kuaciMinAs; k <= kuaciMaxAs; k++)
			{
				kuaciAsBefore = 0;
				kuaciGeBefore = 0;
				kuaciGeBefore = penambahan(j,uangGe);
				kuaciAsBefore = penambahan(k,uangAs);
				kuaciGeNow = pengurangan(kuaciAsBefore,kuaciGeBefore);
				kuaciAsNow = pengurangan(kuaciGeBefore,kuaciAsBefore);
				if(kuaciGeNow > kuaciAsNow){
					pointGe++;
				}else if(kuaciAsNow < kuaciGeNow){
					pointAs++;
				}else{
					pointAs = pointAs;
					pointGe = pointGe;
				}	
			}
		}

		// for (int k = kuaciAs; k <= kuaciMaxAs; k++)
		// {
		// 	kuaciGeBefore = penambahan(kuaciGe,uangGe);
		// 	kuaciAsBefore = penambahan(k,uangAs);
		// 	kuaciGeNow = pengurangan(kuaciAsBefore,kuaciGeBefore);
		// 	kuaciAsNow = pengurangan(kuaciGeBefore,kuaciAsBefore);
		// 	if(kuaciGeNow > kuaciAsNow){
		// 		pointGe++;
		// 	}else if(kuaciAsNow < kuaciGeNow){
		// 		pointAs++;
		// 	}else{
		// 		pointAs = pointAs;
		// 		pointGe = pointGe;
		// 	}
		// }
	}

	cout<<pointGe<<" "<<pointAs<<endl;
	cout << banyak;
}