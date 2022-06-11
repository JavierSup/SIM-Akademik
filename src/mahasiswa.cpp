#include <iostream>
#include <vector>
#include "include/mahasiswa.hpp"


mahasiswa::mahasiswa(std::string id, std::string nama, int dd, int mm, int yy,int nomorhp, std::string alamat, std::string email,
					std::string nrp, std::string departemen, int tahunmasuk,int semesterke, int skslulus, int bobotmatkul, int semestermatkul
					,std::string tambahmatkul, std::string namamatkul, std::string kodematkul)
		: person(id, nama, dd, mm, yy,nomorhp,alamat,email), nrp(nrp), departemen(departemen), tahunmasuk(tahunmasuk),
					 semesterke(semesterke),skslulus(skslulus),bobotmatkul(bobotmatkul),semestermatkul(semestermatkul),
					 tambahmatkul(tambahmatkul), namamatkul(namamatkul), kodematkul(kodematkul)


{
	this->ipk = 0.0;
	
	this->ips = std::vector<float>(14,0);
}

std :: string mahasiswa::getDepartemen()
{
	return this->departemen;
}

std :: string mahasiswa::getnrp()
{
	return this->nrp;
}

void mahasiswa::setTahunmasuk(int tahunmasuk)
{
	this->tahunmasuk = tahunmasuk;
}

int mahasiswa::getTahunmasuk()
{
	return this->tahunmasuk;
}

void mahasiswa::setSemester(int semesterke)
{
	this->semesterke = semesterke;
}

int mahasiswa::getSemester()
{
	return this->semesterke;
}

void mahasiswa::setSKSLulus(int skslulus)
{
	this->skslulus = skslulus;
}

int mahasiswa::getSKSLulus()
{
	return this->skslulus;
}

void mahasiswa::setBobotmatkul(int bobotmatkul)
{
	this->bobotmatkul = bobotmatkul;
}

int mahasiswa::getBobotmatkul()
{
	return this->bobotmatkul;
}

void mahasiswa::setSemestermatkul(int semestermatkul)
{
	this->semestermatkul = semestermatkul;
}

int mahasiswa::getSemestermatkul()
{
	return this->semestermatkul;
}

void mahasiswa::setNamamatkul(std::string namamatkul)
{
	this->namamatkul = namamatkul;
}

std::string mahasiswa::getNamamatkul() 
{
	return this->namamatkul;
}

void mahasiswa::setTambahmatkul(std::string tambahmatkul)
{
	this->tambahmatkul = tambahmatkul;
}

std :: string mahasiswa::getTambahmatkul()
{
	return this->tambahmatkul;
}

void mahasiswa::setKodematkul(std::string kodematkul)
{
	this->kodematkul = kodematkul;
}

std :: string mahasiswa::getKodematkul()
{
	return this->kodematkul;
}



void mahasiswa::hitungIPK()
{
}

void mahasiswa::setIPS(int semester, float ips)
{
	// semester mulai dari 1
	if (semester < 15) {
		this->ips[semester-1] = ips;
		this->hitungIPK();
	}
}

float mahasiswa::getIPS(int semester)
{
	if (semester < 15)
		return this->ips[semester-1];

	return -1.0;
}

std::vector<float> mahasiswa::getAllIPS()
{
	return this->ips;
}



