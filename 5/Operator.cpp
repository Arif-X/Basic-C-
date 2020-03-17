#include<iostream>
using namespace std;

int main(){
	// Tambah
	int tambah = 5 + 5;
	cout << "5 + 5 = " << tambah << "\n";
	
	// Kurang
	int kurang = 5 - 4;
	cout << "5 - 4 = " << kurang << "\n";
	
	// Kali
	int kali = 5 * 4;
	cout << "5 * 4 = " << kali << "\n";
	
	// Bagi
	int bagi = 5 / 5;
	cout << "5 / 5 = " << bagi << "\n";
	
	// Modulus
	int modulus = 5 % 2;
	cout << "5 Modulus 2 = " << modulus << "\n";
	
	// Increment
	int increment = 1;
	++increment	;
	cout << "Increment 1 = " << increment << "\n";
	
	// Decrement
	int decrement = 2;
	--decrement;
	cout << "Decrement 2 = " << decrement << "\n";
	
	// Assignment
	int x = 3;
	int y = 5;
	
	// =
	cout << "x = " << x << "\n";
	cout << "y = " << y << "\n";
	
	// +=
	x += y;
	cout << "x+=y = " << x << "\n";
	
	// -=
	x -= y;
	cout << "x-=y = " << x << "\n";
	
	// *=
	x *= y;
	cout << "x*=y = " << x << "\n";
	
	// /=
	x /= y;
	cout << "x/=y = " << x << "\n";
	
	// %=
	x %= y;
	cout << "x%=y = " << x << "\n";
	
	// |=
	x |= y;
	cout << "x|=y = " << x << "\n";
	
	// ^=
	x ^= y;
	cout << "x^=y = " << x << "\n";
	
	// >>=
	x >>= y;
	cout << "x>>=y = " << x << "\n";
	
	// <<=
	x <<= y;
	cout << "x<<=y = " << x << "\n";
	
	
	//	Compare/Perbandingan
	// Jika Bernilai 1 Adalah Jawaban Benar & Bernilai 0 Jika Salah
	
	//	Sama
	cout << "Samadengan : " << (x == y) << "\n";
	
	//	Tidak Sama
	cout << "Tidak Samadengan : " << (x != y) << "\n";
	
	//	Lebih Dari
	cout << "Lebih Dari : " << (x > y) << "\n";
	
	//	Kurang Dari
	cout << "Kurang Dari : " << (x < y) << "\n";
	
	//	Lebih Atau Samadengan
	cout << "Lebih Atau Samadengan : " << (x >= y) << "\n";
	
	//	Kurang Atau Samadengan
	cout << "Kurang Atau Samadengan : " << (x <= y) << "\n";
	
	
	//	Logika
	// Jika Bernilai 1 Adalah Jawaban Benar & Bernilai 0 Jika Salah
	
	//	Dan
	cout << "Logika Dan : " << (x == y && x >= y) << "\n";
	
	//	Atau
	cout << "Logika Atau : " << (x == y || x >= y) << "\n";
	
	//	Tidak
	cout << "Logika Tidak : " << !(x == y && x >= y) << "\n";
	
}
