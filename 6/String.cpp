#include<iostream>
#include<string>
using namespace std;

int omitting(){
	std::string halo = "Hello";
	std::cout << "Omitting Hello : " << halo;
	return 0;
}

int main(){
	//	Variabel
	string hello = "Hello";
	string world = " World";
	string angkaString1 = "5";
	string angkaString2 = "10";
	int angkaInt1 = 5;
	int angkaInt2 = 10;
	
	//	Default	
	cout << "Hello = " << hello << "\n";
	
	//	Concat/Tambah	
	cout << "Hello World (Concat) = " << hello + world << "\n";
	
	//	Append
	string helloWorld = hello.append(world);
	cout << "Hello World (Append) = " << helloWorld << "\n";
	
	
	//	Angka VS String
	
	//	Angka Int + Angka Int
	int angkaDanAngka = angkaInt1 + angkaInt2;
	cout << "Angka + Angka = " << angkaDanAngka << "\n";
	
	//	Angka String + Angka String
	string angkaStringDanAngkaString = angkaString1 + angkaString2;
	cout << "Angka String + Angka String = " << angkaStringDanAngkaString << "\n";
	
	//	Angka Int + Angka String
	//	string angkaIntDanAngkaString = angkaInt1 + angkaString2;
	//	cout << "Angka Int + Angka String (String) = " << angkaIntDanAngkaString << "\n"; // Syntax Error Karena Berbeda Tipe Data
	
	//	banyaknya Karakter
	string text = "He Cok!";
	cout << "Teks : " << text << "\n";
	cout << "Banyaknya Karakter Pada Teks Diatas Adalah : " << text.size() << "\n";
	
	//ganti Karakter
	string karakter = "He Cuk!";
	cout << "Sebelum : " << karakter << "\n";
	karakter[4] = 'o';
	cout << "Setelah : " << karakter << "\n";	
	
	
	// Omitting	
	omitting();
}
