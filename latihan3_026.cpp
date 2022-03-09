#include<iostream>
using namespace std;

int main(){
	
	int x;
	cout<<"Masukkan Banyak data yang akan diinput\t: "; cin >> x;
	int nilai[x];
		for(int a = 1; a <= x; a++){
			cout<<"Masukkan nilai data ke- "<<a<<": ";
			cin>>nilai[x];
		}
	int max;
	max = nilai[x];
		for(int z = 1; z <= x; z++){
			if(nilai[z] > max){
				max = nilai[z];
			}else{
				max = max;
			}
		}
	cout<<"Nilai Maksimumnya adalah "<<max<<endl;
	cout<<"Alamat Nilai Maksimumnya adalah "<<&max<<endl;
}
