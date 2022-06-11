#ifndef __MATKUL_HPP__
#define __MATKUL_HPP__

#include <iostream>

class matkul {
private:
	int sks;
	std::string NamaMatkul;

public:
	matkul(int sks, std::string NamaMatkul);

	void setSks(int sks);
	int getSks();

	void setNamaMatkul(std::string NamaMatkul);
	std::string getNamaMatkul();

		
};


#endif