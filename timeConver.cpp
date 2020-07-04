#include<iostream>
#include<sstream>
#include<string>

using namespace std;

int main(){

	string time;

	cin >> time;
	string jam = time.substr(0,2);
	string menit = time.substr(3,2);
	string detik = time.substr(6,2);
	string satuan = time.substr(8,2);


	stringstream jamm(jam);
	int x =0;
	jamm >> x; 

	stringstream menitt(menit);
	int y =0;
	menitt >> y; 

	stringstream detikk(detik);
	int z =0;
	detikk >> z; 

	if (jam >= 1 && jam <=12)
	{
		if (satuan == "PM" ||satuan == "pm")
	{
		
	}
	}
	

	cout << x<<endl;
	cout << y<<endl;
	cout << z;

	return 0;
}