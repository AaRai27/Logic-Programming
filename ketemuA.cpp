#include "iostream"

using namespace std;

int main(){
string s;
long long int n;
long long int a = 0;
long long int max = 1000000000000;

cin >> s;
cin >> n;
if(n>1000){
    n = n/1000;    
}else{
    n = n;
}
int b = s.length();

if(n>=1 && n<=max){
    if(b>=1 && b<= 100){
        for (long long int i = 0; i < n; i++)
        {
            for (long long int k = 0; k < b ; k++)
            {
                if (i<n){
                    if(s[k] == 'a'){
                        a++;
                    }
                    i++;
                }else{
                    break;
                }
            }
            i--;
        }
        if(n>1000){
            cout << a*1000;
        }else{
            cout << a;
        }
        
    }
}
return 0;
}