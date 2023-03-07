#include <iostream>
using namespace std;

int main(){
    for(int i=1; i<=10; i++){
        for(int k=0;k<=i-1;k++){
            cout<< " ";
        }
        for(int j=i; j<=i;j++){
            cout <<"*";
        }
        cout << endl;
    }

    for(int l=10;l>=1;l--){
        for(int m=9;m>=l-1;m--){
            cout << " ";
        }
        for(int n=l;n>=l;n--){
            cout << "*";
        }
        cout<<endl;
    }
}