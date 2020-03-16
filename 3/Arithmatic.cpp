#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int jariJari = 10;
	float pi = 3.14;
	cout << "Jari-Jari : " << jariJari << "\n";
	cout << "Rumus : PI * Jari-Jari * Jari-Jari \n";
	cout << "Luas Lingkaran :";
	cout << pow(jariJari, 2) * pi;
}
