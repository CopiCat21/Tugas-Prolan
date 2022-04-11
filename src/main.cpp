#include <iostream>
#include <vector>
#include <string>
#include <sstream>

#include "include/person.hpp"
#include "include/mahasiswa.hpp"
#include "include/dosen.hpp"
#include "include/tendik.hpp"

using namespace std;

int main()
{
	vector<mahasiswa> recMhs;
	vector<dosen> recDosen;
	vector<tendik> recTendik;

	int menu_terpilih;

	while(1) {
		cout << "Selamat datang di Universitas Pilihan Anda" << endl << endl;
		cout << "Data statistik:" << endl;
		cout << "  1. Jumlah Mahasiswa             : " << recMhs.size() << " mahasiswa" << endl;
		cout << "  2. Jumlah Dosen                 : " << recDosen.size() << " dosen" << endl;
		cout << "  3. Jumlah Tenaga Kependidikan   : " << recTendik.size() << " tendik" << endl;
		cout << endl;
		cout << "Menu: " << endl;
		cout << "  1. Tambah Mahasiswa" << endl;
		cout << "  2. Tambah Dosen" << endl;
		cout << "  3. Tambah Tenaga Kependidikan" << endl;
		cout << "  4. Tampilkan semua Mahasiswa" << endl;
		cout << "  5. Tampilkan semua Dosen" << endl;
		cout << "  6. Tampilkan semua Tenaga Kependidikan" << endl;
		cout << "-> Silahkan memilih salah satu: ";
		cin >> menu_terpilih;
		cin.ignore();

		switch (menu_terpilih) {
			case 1:
			{
				int dd, mm, yy, tahunmasuk, semesterke, skslulus;
                string id, nama, nrp, departemen;
				
				stringstream ss;
                ss << 1 + recMhs.size();
                id = ss.str();
				
				cout << "Nama: ";
                getline(cin, nama);

				cout << "Tanggal Lahir (dd mm yyyy): ";
				cin >> dd >> mm >> yy;

				cout << "NRP: ";
				cin >> nrp;

				cout << "Departemen: ";
				cin.ignore();
				getline(cin, departemen);

				cout << "Tahun Masuk: ";
				cin >> tahunmasuk;

				cout << "Semester Ke: ";
				cin >> semesterke;

				cout << "SKS Lulus : ";
				cin >> skslulus;

				mahasiswa mhs(id, nama, dd, mm, yy, nrp, departemen, tahunmasuk, semesterke, skslulus);
				recMhs.push_back(mhs);
			}
				break;
			case 2:
			{
				int dd, mm, yy;
                string id, nama, npp, departemen, pendidikan;
				
				stringstream ss;
                ss << 1 + recDosen.size();
                id = ss.str();
				
				cout << "Nama: ";
                getline(cin, nama);

				cout << "Tanggal Lahir (dd mm yyyy): ";
				cin >> dd >> mm >> yy;

				cout << "NPP: ";
				cin >> npp;
				
				cout << "Departemen: ";
				cin.ignore();
				getline(cin, departemen);

				cout << "Pendidikan: ";
				cin >> pendidikan;

				dosen Dosen(id, nama, dd, mm, yy, npp, departemen, pendidikan);
				recDosen.push_back(Dosen);
			}
				break;
			case 3:
			{
				int dd, mm, yy;
				string id, nama, npp, unit;

				stringstream ss;
                ss << 1 + recTendik.size();
                id = ss.str();

				cout << "Nama: ";
				getline(cin, nama);

				cout << "Tanggal Lahir (dd mm yyyy): ";
				cin >> dd >> mm >> yy;

				cout << "NPP: ";
				cin >> npp;
				
				cout << "Unit: ";
				cin.ignore();
				getline(cin, unit);

				tendik Tendik(id, nama, dd, mm, yy, npp, unit);
				recTendik.push_back(Tendik);
			}
				break;
			case 4:
			{
				for (unsigned long i = 0; i < recMhs.size(); i++)
				{
					cout << "Nama Mahasiswa: " << recMhs[i].getNama() << endl;
					cout << "Tanggal Lahir: " << recMhs[i].getTglLahir() << "/" 
						<< recMhs[i].getBulanLahir() << "/" << recMhs[i].getTahunLahir() << endl;
					cout << "NRP: " << recMhs[i].getNrp() << endl;
					cout << "Departemen: " << recMhs[i].getDepartemen() << endl;
					cout << "Tahun Masuk: " << recMhs[i].getTahunmasuk() << endl;
					cout << "Semester Ke-" << recMhs[i].getSemester() << endl;
					cout << "SKS Lulus : " << recMhs[i].getSKSLulus() << endl;
					cout << "\n" << endl;
				}
			}
				break;
			case 5:
			{
				for (unsigned long i = 0; i < recDosen.size(); i++)
				{
					cout << "Nama Dosen: " << recDosen[i].getNama() << endl;
					cout << "Tanggal Lahir: " << recDosen[i].getTglLahir() << "/" 
						<< recDosen[i].getBulanLahir() << "/" << recDosen[i].getTahunLahir() << endl;
					cout << "NPP: " << recDosen[i].getNpp() << endl;
					cout << "Departemen: " << recDosen[i].getDepartemen() << endl;
					cout << "Pendidikan: " << recDosen[i].getPendidikan() << endl;
					cout << "\n" << endl; 
				}
			}
				break;
			case 6:
			{
				for (unsigned long i = 0; i < recTendik.size(); i++)
				{
					cout << "Nama Tendik: " << recTendik[i].getNama() << endl;
					cout << "Tanggal Lahir: " << recTendik[i].getTglLahir() 
						<< "/" << recTendik[i].getBulanLahir() << "/" << recTendik[i].getTahunLahir() << endl;
					cout << "NPP: " << recTendik[i].getNPP() << endl;
					cout << "Unit: " << recTendik[i].getUnit() << endl;
					cout << "\n" << endl;
				}
			}
				break;
		}
	}

	return 0;
}