// Program Kelulusan
// Buatlah program dimana pengguna akan memasukan nilai Matematika dan Bahasa
// //Jika nilai Fisika >= 90 maka dinyatakan lulusan terbaik
// Jika nilai rerata nilai lebih dari 60 atau Matematika lebih daari 70 maka dinyatakan lulus.
// selain daripada itu tida lulus

#include <iostream>
using namespace std;
int main() {
	int nilMatematika, nilBahasa, nilFisika;
	string status;
	float rerata;

	cout << "Nilai Matematika : " << endl;
	cin >> nilMatematika;
	cout << "Nilai Bahasa : " << endl;
	cin >> nilBahasa;
	cout << "Nilai Fisika : " << endl;

	rerata = (nilMatematika + nilBahasa + nilFisika) / 3;

	if (nilMatematika > 70|| rerata > 60) {
		status = "Lulus";
		if (nilFisika >= 90) {
			status = "Lulusan Terbaik";
		}
	}
	else {
		status = "Tidak Lulus";
	}
	cout << "Nilai Matematika : " << nilMatematika << endl;
	cout << "Nilai Bahasa : " << nilBahasa << endl;
	cout << "Nilai Fisika : " << nilFisika << endl;
	cout << "Status Kelulusan : " << status;
}