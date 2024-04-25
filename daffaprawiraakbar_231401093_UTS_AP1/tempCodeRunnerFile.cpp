#include <iostream>

using namespace std;
int main(){
    int angka,j;
    int i,num = 1;

    cout<<"masukkan batas angka: "; 
    cin>>angka;


    for(i=1;i<=angka;i++){
        for(j=1;j<=i;j++){
            cout<<num;
            num++;
        }
        cout<<endl;

    }
}