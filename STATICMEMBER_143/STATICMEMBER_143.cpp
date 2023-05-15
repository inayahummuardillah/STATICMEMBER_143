#include <iostream>
#include <string>
using namespace std;

class mahasiswa {
public:
		static int nim;
		int id;
		string nama;

		void setID();
		void print11();
		mahasiswa(string pnama) : nama(pnama) { setID(); }
};

int mahasiswa::nim = 0;

void mahasiswa::setID() {
	id = ++nim;
}

void mahasiswa::print11() {
	cout << "ID     = " << id << endl;
	cout << "Nama   = " << nama << endl;
	cout << endl;
}

int main() {
	mahasiswa mhs1("Lia Kurnia");
	mahasiswa mhs2("Asroni");
	mahasiswa mhs3("Andi Kurniawan");
	mahasiswa mhs4("Joko Purbo");

	mhs1.print11();
	mhs2.print11();
	mhs3.print11();
	mhs4.print11();
	return 0;
}