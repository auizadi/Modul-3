#include<iostream>

using namespace std;

	
int main(){
	string x;
	cout<<"Masukkan Tulisan (Huruf Kecil)\t: ";
	getline(cin, x);
	for(int a = 0; a < x.length(); a++){
		if(islower(x[a])){
			x[a] = toupper(x[a]);
		}else if (isupper(x[a])){
			x[a] = tolower(x[a]);
		}
	}
	cout<<"Hasil Tulisan (Huruf Besar)\t: "<<x<<endl;
}


