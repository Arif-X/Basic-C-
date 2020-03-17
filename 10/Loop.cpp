#include<iostream>
using namespace std;

int main(){
	int j = 0;
	
	//	While
	while(j < 10){
		cout << j << "\n";
		j++;
	}
	
	//	Do/While
	do {
		cout << j << "\n";
		j++;
	}
	while (j < 10);
	
	//	For
	for(int i=0; i < 10; i++){
		cout << i << "\n";
	}
}
