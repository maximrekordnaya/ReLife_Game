#include "Apartments.h"

Apartments::Apartments()
{
	std::ifstream file;
	file.open("apart.txt");
	std::string str;
	if (file.is_open()) {
		getline(file, str);
		_hut = atoi(str.c_str());

		getline(file, str);
		_basement = atoi(str.c_str());

		getline(file, str);
		_attic = atoi(str.c_str());

		getline(file, str);
		_roomRent = atoi(str.c_str());

		getline(file, str);
		_apartment = atoi(str.c_str());

		getline(file, str);
		_house = atoi(str.c_str());

		getline(file, str);
		_villa = atoi(str.c_str());
		file.close();
	}
	else {
		FileApartReset();
	}
	
}

void Apartments::WriteFileApart()
{
	std::ofstream file;
	file.open("apart.txt");
	if (file.is_open()) {
		_hut == true ? file << 1 << "\n" : file << 0 << "\n";
		_basement == true ? file << 1 << "\n" : file << 0 << "\n";
		_attic == true ? file << 1 << "\n" : file << 0 << "\n";
		_roomRent == true ? file << 1 << "\n" : file << 0 << "\n";
		_apartment == true ? file << 1 << "\n" : file << 0 << "\n";
		_house == true ? file << 1 << "\n" : file << 0 << "\n";
		_villa == true ? file << 1 << "\n" : file << 0 << "\n";
	}
	file.close();
}

void Apartments::buyHut()
{
	_hut = true;
	WriteFileApart();
}

void Apartments::buyBasement()
{
	_basement = true;
	WriteFileApart();
}

void Apartments::buyAttic()
{
	_attic = true;
	WriteFileApart();
}

void Apartments::buyRoomRent()
{
	_roomRent = true;
	WriteFileApart();
}

void Apartments::buyApartment()
{
	_apartment = true;
	WriteFileApart();
}

void Apartments::buyHouse()
{
	_house = true;
	WriteFileApart();
}

void Apartments::buyVilla()
{
	_villa = true;
	WriteFileApart();
}

bool Apartments::Hut()
{
	if (_hut == true) {
		return true;
	}
	else {
		return false;
	}
}

bool Apartments::Basement()
{
	if (_basement == true) {
		return true;
	}
	else {
		return false;
	}
}

bool Apartments::Attic()
{
	if (_attic == true) {
		return true;
	}
	else {
		return false;
	}
}

bool Apartments::RoomRent()
{
	if (_roomRent == true) {
		return true;
	}
	else {
		return false;
	}
}

bool Apartments::Apartment()
{
	if (_apartment == true) {
		return true;
	}
	else {
		return false;
	}
}

bool Apartments::House()
{
	if (_house == true) {
		return true;
	}
	else {
		return false;
	}
}

bool Apartments::Villa()
{
	if (_villa == true) {
		return true;
	}
	else {
		return false;
	}
}

void Apartments::FileApartReset()
{
	std::ofstream file;
	file.open("apart.txt");
	if (file.is_open()) {
		for (int i = 0; i < 7; ++i) {
			file << 0 << "\n";
		}
	}
}

Apartments::~Apartments()
{
	FileApartReset();
}
