#include<iostream>
#include<stdio.h>

using namespace std;

int H(const char *s){
	int x = 0;
	for(; *s != '\0'; s++)
	x++;
	return x;
}

main (void){
	char kata[100];
	cout<<"Tuliskan Kata\t: ";
	cin.getline(kata,100);
	cout<<endl;
	cout<<"Jumlah Karakter\t: "<<H(kata)<<endl;
}
