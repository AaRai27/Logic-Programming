#include<iostream>
using namespace std;
int main(){
    char a[9];
    for (int i = 0; i < 9; ++i)
    {
    	cin >> a[i];
    }
    char temp = a[3];
    a[3]= a[1];
    a[1]= temp;
    temp = a[6];
    a[6] = a[2];
    a[2] = temp;
    temp = a[7];
    a[7] = a[5];
    a[5] =temp;
     cout << a[0] << " " << a[1] << " " << a[2] <<endl;
     cout << a[3] << " " << a[4] << " " << a[5] <<endl;
     cout << a[6] << " " << a[7] << " " << a[8]<<endl;
    return 0;
}