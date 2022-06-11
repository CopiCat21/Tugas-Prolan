#include <iostream>
#include "include/matkul.hpp"


matkul::matkul(int sks, std::string NamaMatkul)
		: sks(sks), NamaMatkul(NamaMatkul){}

void matkul::setSks(int sks)
{
	this->sks = sks;
}

int matkul::getSks() 
{
	return this->sks;
}

void matkul::setNamaMatkul(std::string NamaMatkul)
{
	this->NamaMatkul = NamaMatkul;
}

std::string matkul::getNamaMatkul()
{
	return this->NamaMatkul;
}
