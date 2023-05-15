#include <iostream>
#include <string>
using namespace std;

class mahasiswa {
private:
	static int nim;
public:
	int id;
	string nama;

	void setID();
	void prinAll();

	static void setNim(int pNim) { nim = pNim; /*Definisi Funcion*/ }
	static int getNim() { return nim; /*Definisi Function*/ }

	mahasiswa(string pnama) :nama(pnama) { setID(); }
};

int mahasiswa::nim = 0;

void mahasiswa::setID() {
	id = ++nim;
}

void mahasiswa::prinAll() {
	cout << "ID = " << id << endl;
	cout << "Nama = " << nama << endl;
	cout << endl;
}

int main() {
	mahasiswa mhs1("Sri Dadi");
	mahasiswa mhs2("Budi Jatmiko");
	mahasiswa::setNim(9); //mengakses nilai melalui static number function "setNim"
	mahasiswa mhs3("Andi Janu");
	mahasiswa mhs4("Joko Wahono");

	mhs1.prinAll();
	mhs2.prinAll();
	mhs3.prinAll();
	mhs4.prinAll();

	cout << "akses dari luar object = " << mahasiswa::getNim() << endl; //mengakses nim melalui static member function "getNim"

		return 0;
}