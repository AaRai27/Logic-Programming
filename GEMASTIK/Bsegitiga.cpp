#include<iostream>

using namespace std;

int main(){

 	int n;
 	char s;
 	cin>>n;
 	cin>>s;

 	for(int i = 1; i<=n; i++){
        for(int j=0; j<=n-i-1;j++){
            cout<<" ";
        }
        for(int k=1; k <= i;k++){
           cout<<s<<" ";
        }
        cout<<endl;
 	}


}
