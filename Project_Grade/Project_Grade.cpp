#include <iostream>
using namespace std;
int main()
{
	float nNilMath, nNilPhys, nRerata;
	string status;
	cout << "Masukkan Nilai Matematika = ";
	cin >> nNilMath;

	cout << "Masukkan Nilai Fisika = ";
	cin >> nNilPhys;

	nRerata = (nNilMath + nNilPhys) / 2;

	if (nRerata >= 60) {
		status = "Lulus jalur rerata";
	}
	else if (nNilMath >= 70) {
		status = "Lulus jalur Nilai Matematika";
	}
	else {
		status = "Tidak Lulus";
	}
	cout << "Status Kelulusan = " << status << endl;

}

