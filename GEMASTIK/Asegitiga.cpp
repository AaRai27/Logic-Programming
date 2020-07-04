#include<iostream>

using namespace std;

int main(){

 	unsigned int x,y,z;
 	unsigned int syarat1;
 	unsigned int max;

 	cin >> x;
 	cin >> y;
 	cin >> z;

 	if(x>y && x>z){
 		max = x;
 		x = y;
 		y=z;
 	}else if( y>x && y>z){
 		max = y;
 		y = z;
 	}else{
 		max = z;
 	}
 	syarat1 = x+y;
 	if(syarat1 > max){
 		cout << "TRUE";
 	}else{
 		cout << "FALSE";
 	}
 	return 0;
}