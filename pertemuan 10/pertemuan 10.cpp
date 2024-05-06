#include <iostream>
using namespace std;

class mahasiswa {
public:
	int nim;
	void showNim() {
		cout << "No induk = " << nim << endl;
	}

};

int main() {
	mahasiswa mhs{1}; //object mhs
	mhs.showNim(); //mmeber acces operator

	mahasiswa& refMhs = mhs; //pointer reference refMhs
	refMhs.nim = 2; //member acces operator
	mhs.showNim();

	mahasiswa* pMhs = &mhs; //pointer dereference pmhs
	pMhs->nim = 3; //arrow operator
	mhs.showNim();
	return 0;
}
